( function($) {
// rely on $ within safety of "bodyguard" function
$(document).ready( function() {

    $('#edit-select-all-all').click(function(){
    if($(this).attr('checked')){
    $('input:checkbox').attr('checked',true);
    }
    else{
    $('input:checkbox').attr('checked',false);
    }
    });
    var objForm = document.forms[0];
    var i=0;
    for( i=0 ; i<document.forms[0].length ; i++) 
    {

    if (objForm.elements[i].type=='checkbox') 
    {

      var tttt = objForm.elements[i].value;
      var hidval = $("#hidden_id").val();
      var res1 = hidval.split(",");
      
        res1.forEach(function(entry) {
        if(tttt==entry) {
        console.log(entry);
        objForm.elements[i].checked= true;
        }

        });
    }
    }

});
 } ) ( jQuery );

