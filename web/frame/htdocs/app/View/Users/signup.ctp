<?php echo $this->Form->create('User'); ?>
<?php echo $this->Form->input('username', array('label'=>"login: ")); ?>
<?php echo $this->Form->input('mail', array('label'=>"e-mail: ")); ?>
<?php echo $this->Form->input('password', array('label'=>"password: ")); ?>
<?php echo $this->Form->end("S'enregistrer"); ?>
