( function($) {
// rely on $ within safety of "bodyguard" function
$(document).ready( function() {

     $("form").submit(function(e){
      
      var financialyear = $('select[name="financial_year"]').val();
      var dept = $('select[name="department"]').val();
      var reporttovw = $('select[name="report_to_view"]').val();
      var grantno = $('select[name="grant_no"]').val();
      var frequency = $('select[name="frequency"]').val();
      var month = $('select[name="month"]').val();
      var month1 = $('select[name="month"]').val();
      var error = "";   
     if (financialyear == '') {  
            error += "Please Select Financial Year.\n"; 
    } 
    if (dept == '') {  
            error += "Plese Select the Department.\n";  
    }
    if(reporttovw=='') {
            error += "Please Select Report To View.\n"; 
    }
    if (grantno == '') {  
            error += "Plese Select the Grant No.\n";  
    } 
    if (frequency == '') {  
            error += "Plese Select the Frequency.\n";  
    } 
    if (month == '') {  
            error += "Plese Select the Month.\n";  
    }    
    if (error != '') {  
        alert(error);  
        return (false);  
    }
    if (month <10) {
        month= "0" + month;
    }
    if(frequency == 'M')
    {
        mon = "monthly";
    }
    else
    {
        mon = "fortNight";
        month= "15" + month;
        
    }

     var yersmonth = financialyear.split('-');
     if(month1 < 4 ) {
        var financialyear1 = yersmonth[1];
    } else{
      var financialyear1 = yersmonth[0];  
    }
    
    var yearmonth = month+financialyear1;
    
    var finurl = "http://elekha.nic.in/writereaddata/discloser/"+mon+"/SNo_"+reporttovw+"_"+frequency+"_"+dept+"_"+grantno+"_"+yearmonth+"_"+financialyear+".pdf";
     win = window.open(finurl, "Win1","width=720,height=500,menubar=0,status=0,toolbar=0,resizable=yes,top=25,left=25,scrollbars=yes");
     //alert(finurl);
    e.preventDefault();
  }); 

});
} ) ( jQuery );