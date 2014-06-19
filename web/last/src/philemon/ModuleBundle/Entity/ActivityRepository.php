<?php

namespace philemon\ModuleBundle\Entity;

use Doctrine\ORM\EntityRepository;

/**
 * ActivityRepository
 *
 * This class was generated by the Doctrine ORM. Add your own custom
 * repository methods below.
 */
class ActivityRepository extends EntityRepository
{
  function getUnrActivities($subs, $module_id, $user_id)
  {
		$ids = array();
		if (count($subs) <= 0)
		{
			return $this->createQueryBuilder('m')
						->getQuery()
						->getResult();
		}
		foreach ($subs as $s)
			$ids[] = $s->getActivity()->getId();
		return $this->createQueryBuilder('m')
					->where('m.id NOT IN ('.implode(',', $ids).') AND m.module=:mid')
					->setParameter('mid', $module_id)
					->getQuery()
					->getResult();
  }
}
