<!--		<div class="divTable">
             <div class="headRow">
                <div class="divCell" align="center">Name</div>
                <div  class="divCell">Acts</div>
                <div  class="divCell">Rules</div>
                <div  class="divCell">Regulations</div>
             </div>
            <div class="divRow">
                  <div class="divCell">001</div>
                <div class="divCell">002</div>
                <div class="divCell">am unable to get the white space between col while the content increases</div>
                <div  class="divCell">Customer Address</div>
            </div>
            <div class="divRow">
                <div class="divCell">xxx</div>
                <div class="divCell">yyy</div>
                <div class="divCell">www</div>
                <div  class="divCell">Customer Address</div>
           </div>
            <div class="divRow">
                <div class="divCell">ttt</div>
                <div class="divCell">uuu</div>
                <div class="divCell">Mkkk</div>
                <div  class="divCell">Customer Address</div>
           </div>

      </div>-->
      
      
      
      <?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php $i=1; if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php $i++; endforeach; ?>