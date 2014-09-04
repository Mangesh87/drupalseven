<?php
/**
 * @file
 *
 * This is the template file for rendering the firstform nameform.
 * In this file each element of the form is rendered individually
 * instead of the entire form at once, giving me the ultimate control
 * over how my forms are laid out. I could also print the whole form
 * at once - using the predefined layout in the module by
 * printing $variables['firstform_nameform_form'];
 *
 */
print '<div id="firstform_nameform">';
print $variables['firstform_nameform']['color'];
print $variables['firstform_nameform']['name'];
print $variables['firstform_nameform']['submit'];
print $variables['firstform_nameform']['hidden'];
print '</div>';
// print $firstform_nameform_form;
