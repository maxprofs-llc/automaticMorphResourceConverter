/**
 * FILE NAME: tam_suff.c
 */

/** Function: fun_tam
 *  This function checks the auxilary verbs and prints the required tam and suffix values
 *  Return void
*/

/* HEADER FILES */

#include <stdio.h>
#include <string.h>
#include "headers/struct.h"
#include "headers/defn.h"
#include "./common/analyser/morph_logger.h"


extern FILE *log_file;
#define FUNCTION "fun_tam()"


void fun_tam(aux_verb)
  
char aux_verb[SUFFWORDSIZE]; /* auxilary verb */
   {
	char *program_name="tam_suff.c";
        PRINT_LOG(log_file," This function checks the auxilary verbs and prints the required tam and suffix values");

	if(!strcmp(aux_verb,"a"))	printf("0_a");
	else  if(!strcmp(aux_verb,"A"))	printf("0_A");
	else  if(!strcmp(aux_verb,"a_A"))	printf("0_a");
	else  if(!strcmp(aux_verb,"A_A"))	printf("0_A");
	else  if(!strcmp(aux_verb,"a_alle"))	printf("0_a");
	else  if(!strcmp(aux_verb,"A_alle"))	printf("0_A");
	else  if(!strcmp(aux_verb,"a_aMdi"))	printf("0_a");
	else  if(!strcmp(aux_verb,"A_aMdi"))	printf("0_A");
	else  if(!strcmp(aux_verb,"a_ani"))	printf("0_a");
	else  if(!strcmp(aux_verb,"A_ani"))	printf("0_A");
	else  if(!strcmp(aux_verb,"a_annamAta"))	printf("0_a");
	else  if(!strcmp(aux_verb,"A_annamAta"))	printf("0_A");
	else  if(!strcmp(aux_verb,"a_ata"))	printf("0_a");
	else  if(!strcmp(aux_verb,"A_ata"))	printf("0_A");
	else  if(!strcmp(aux_verb,"a_badu"))	printf("0_a");
	else  if(!strcmp(aux_verb,"a_batti"))	printf("0_a");
	else  if(!strcmp(aux_verb,"a_beVttu"))	printf("0_a");
	else  if(!strcmp(aux_verb,"a_bo"))	printf("0_a");
	else  if(!strcmp(aux_verb,"a_bUnu"))	printf("0_a");
	else  if(!strcmp(aux_verb,"a_buxXavvu"))	printf("0_a");
	else  if(!strcmp(aux_verb,"a_buxXeVyyi"))	printf("0_a");
	else  if(!strcmp(aux_verb,"a_buxXiputtu"))	printf("0_a");
	else  if(!strcmp(aux_verb,"adaM"))	printf("0_adaM");
	else  if(!strcmp(aux_verb,"adaM_aMta"))	printf("0_adaM");
	else  if(!strcmp(aux_verb,"adaM_aMte"))	printf("0_adaM");
	else  if(!strcmp(aux_verb,"adaM_aMtU"))	printf("0_adaM");
	else  if(!strcmp(aux_verb,"adaM_annA"))	printf("0_adaM");
	else  if(!strcmp(aux_verb,"adaM_annamAta"))	printf("0_adaM");
	else  if(!strcmp(aux_verb,"adaM_gAni"))	printf("0_adaM");
	else  if(!strcmp(aux_verb,"adj_0"))	printf("0");
	else  if(!strcmp(aux_verb,"adj_gA"))	printf("0_gA");
	else  if(!strcmp(aux_verb,"adj_na"))	printf("0_na");
	else  if(!strcmp(aux_verb,"adj_nEna"))	printf("0_nEna");
	else  if(!strcmp(aux_verb,"adj_nEnavAdu"))	printf("0_nEnavAdu");
	else  if(!strcmp(aux_verb,"adj_nEnavAru"))	printf("0_nEnavAru");
	else  if(!strcmp(aux_verb,"adj_nEnaxi_na"))	printf("0_nEnaxi");
	else  if(!strcmp(aux_verb,"adj_nEnaxi"))	printf("0_nEnaxi");
	else  if(!strcmp(aux_verb,"adj_nivAdEna"))	printf("0_nivAdEna");
	else  if(!strcmp(aux_verb,"adj_nivAdEnavAdu"))	printf("0_nivAdEnavAdu");
	else  if(!strcmp(aux_verb,"adj_nivAdu"))	printf("0_nivAdu");
	else  if(!strcmp(aux_verb,"adj_nivArEna"))	printf("0_nivArEna");
	else  if(!strcmp(aux_verb,"adj_nivArEnavAru"))	printf("0_nivArEnavAru");
	else  if(!strcmp(aux_verb,"adj_nivAru"))	printf("0_nivAru");
	else  if(!strcmp(aux_verb,"adj_nixEna_na"))	printf("0_nixEna");
	else  if(!strcmp(aux_verb,"adj_nixEna"))	printf("0_nixEna");
	else  if(!strcmp(aux_verb,"adj_nixEnaxi_na"))	printf("0_nixEnaxi");
	else  if(!strcmp(aux_verb,"adj_nixEnaxi"))	printf("0_nixEnaxi");
	else  if(!strcmp(aux_verb,"adj_nixi_na"))	printf("0_nixi");
	else  if(!strcmp(aux_verb,"adj_nixi"))	printf("0_nixi");
	else  if(!strcmp(aux_verb,"adj_pAti"))	printf("0_pAti");
	else  if(!strcmp(aux_verb,"adj_ti"))	printf("0_ti");
	else  if(!strcmp(aux_verb,"adj_vAdEna"))	printf("0_vAdEna");
	else  if(!strcmp(aux_verb,"adj_vAdEnavAdu"))	printf("0_vAdEnavAdu");
	else  if(!strcmp(aux_verb,"adj_vAdu"))	printf("0_vAdu");
	else  if(!strcmp(aux_verb,"adj_vArEna"))	printf("0_vArEna");
	else  if(!strcmp(aux_verb,"adj_vArEnavAru"))	printf("0_vArEnavAru");
	else  if(!strcmp(aux_verb,"adj_vAru"))	printf("0_vAru");
	else  if(!strcmp(aux_verb,"adj_wanaM"))	printf("0_wanaM");
	else  if(!strcmp(aux_verb,"adj_xEna_na"))	printf("0_xEna na");
	else  if(!strcmp(aux_verb,"adj_xEna"))	printf("0_xEna");
	else  if(!strcmp(aux_verb,"adj_xEnaxi_na"))	printf("0_xEnaxi na");
	else  if(!strcmp(aux_verb,"adj_xEnaxi"))	printf("0_xEnaxi");
	else  if(!strcmp(aux_verb,"adj_xi_na"))	printf("0_xi na");
	else  if(!strcmp(aux_verb,"adj_xi"))	printf("0_xi");
	else  if(!strcmp(aux_verb,"adv_0"))	printf("0");
	else  if(!strcmp(aux_verb,"adv_0_A"))	printf("0");
	else  if(!strcmp(aux_verb,"adv_0_e"))	printf("0");
	else  if(!strcmp(aux_verb,"adv_0_o"))	printf("0");
	else  if(!strcmp(aux_verb,"adv_0_V"))	printf("0");
	else  if(!strcmp(aux_verb,"adv_ki_A"))	printf("0_ki");
	else  if(!strcmp(aux_verb,"adv_ki_e"))	printf("0_ki");
	else  if(!strcmp(aux_verb,"adv_ki_o"))	printf("0_ki");
	else  if(!strcmp(aux_verb,"adv_ki_V"))	printf("0_ki");
	else  if(!strcmp(aux_verb,"adv_ku"))	printf("0_ku");
	else  if(!strcmp(aux_verb,"adv_lA"))	printf("0_lA");
	else  if(!strcmp(aux_verb,"adv_lA_A"))	printf("0_lA");
	else  if(!strcmp(aux_verb,"adv_lA_e"))	printf("0_lA");
	else  if(!strcmp(aux_verb,"adv_lA_o"))	printf("0_lA");
	else  if(!strcmp(aux_verb,"adv_lA_V"))	printf("0_lA");
	else  if(!strcmp(aux_verb,"adv_lo"))	printf("0_lo");
	else  if(!strcmp(aux_verb,"adv_lo_A"))	printf("0_lo");
	else  if(!strcmp(aux_verb,"adv_lo_e"))	printf("0_lo");
	else  if(!strcmp(aux_verb,"adv_lo_o"))	printf("0_lo");
	else  if(!strcmp(aux_verb,"adv_lo_V"))	printf("0_lo");
	else  if(!strcmp(aux_verb,"adv_nu"))	printf("0_nu");
	else  if(!strcmp(aux_verb,"adv_nuMdi"))	printf("0_nuMdi");
	else  if(!strcmp(aux_verb,"adv_nuMdi_A"))	printf("0_nuMdi");
	else  if(!strcmp(aux_verb,"adv_nuMdi_e"))	printf("0_nuMdi");
	else  if(!strcmp(aux_verb,"adv_nuMdi_o"))	printf("0_nuMdi");
	else  if(!strcmp(aux_verb,"adv_nuMdi_V"))	printf("0_nuMdi");
	else  if(!strcmp(aux_verb,"adv_vAdu"))	printf("0_vAdu");
	else  if(!strcmp(aux_verb,"adv_vAdu_A"))	printf("0_vAdu");
	else  if(!strcmp(aux_verb,"adv_vAdu_e"))	printf("0_vAdu");
	else  if(!strcmp(aux_verb,"adv_vAdu_o"))	printf("0_vAdu");
	else  if(!strcmp(aux_verb,"adv_vAdu_V"))	printf("0_vAdu");
	else  if(!strcmp(aux_verb,"adv_varaku"))	printf("0_varaku");
	else  if(!strcmp(aux_verb,"adv_varaku_A"))	printf("0_varaku");
	else  if(!strcmp(aux_verb,"adv_varaku_e"))	printf("0_varaku");
	else  if(!strcmp(aux_verb,"adv_varaku_o"))	printf("0_varaku");
	else  if(!strcmp(aux_verb,"adv_varaku_V"))	printf("0_varaku");
	else  if(!strcmp(aux_verb,"adv_wo"))	printf("0_wo");
	else  if(!strcmp(aux_verb,"adv_wo_A"))	printf("0_wo");
	else  if(!strcmp(aux_verb,"adv_wo_e"))	printf("0_wo");
	else  if(!strcmp(aux_verb,"adv_wo_o"))	printf("0_wo");
	else  if(!strcmp(aux_verb,"adv_wo_V"))	printf("0_wo");
	else  if(!strcmp(aux_verb,"adv_xAkA"))	printf("0_xAkA");
	else  if(!strcmp(aux_verb,"adv_xAkA_A"))	printf("0_xAkA");
	else  if(!strcmp(aux_verb,"adv_xAkA_e"))	printf("0_xAkA");
	else  if(!strcmp(aux_verb,"adv_xAkA_o"))	printf("0_xAkA");
	else  if(!strcmp(aux_verb,"adv_xAkA_V"))	printf("0_xAkA");
	else  if(!strcmp(aux_verb,"adv_xi"))	printf("0_xi");
	else  if(!strcmp(aux_verb,"adv_xi_A"))	printf("0_xi");
	else  if(!strcmp(aux_verb,"adv_xi_e"))	printf("0_xi");
	else  if(!strcmp(aux_verb,"adv_xi_o"))	printf("0_xi");
	else  if(!strcmp(aux_verb,"adv_xi_V"))	printf("0_xi");
	else  if(!strcmp(aux_verb,"adv_yoVkka"))	printf("0_yoVkka");
	else  if(!strcmp(aux_verb,"a_e"))	printf("0_a");
	else  if(!strcmp(aux_verb,"A_e"))	printf("0_A");
	else  if(!strcmp(aux_verb,"a_EnA"))	printf("0_a");
	else  if(!strcmp(aux_verb,"a_gA"))	printf("0_a");
	else  if(!strcmp(aux_verb,"a_gala"))	printf("0_a_gala");
	else  if(!strcmp(aux_verb,"a_galugu"))	printf("0_a_galugu");
	else  if(!strcmp(aux_verb,"a_gAne"))	printf("0_a_gAne");
	else  if(!strcmp(aux_verb,"a_goru"))	printf("0_a_goru");
	else  if(!strcmp(aux_verb,"a_goVttu"))	printf("0_a_goVttu");
	else  if(!strcmp(aux_verb,"a_gUdu"))	printf("0_a_gUdu");
	else  if(!strcmp(aux_verb,"a_ivvu"))	printf("0_a_ivvu");
	else  if(!strcmp(aux_verb,"a_jAlu"))	printf("0_a_jAlu");
	else  if(!strcmp(aux_verb,"AjFArWa"))	printf("0_AjFArWa");
	else  if(!strcmp(aux_verb,"AjFArWa_ammA"))	printf("0_AjFArWa_ammA");
	else  if(!strcmp(aux_verb,"AjFArWa_ayyA"))	printf("0_AjFArWa_ayyA");
	else  if(!strcmp(aux_verb,"AjFArWa_le"))	printf("0_AjFArWa_le");
	else  if(!strcmp(aux_verb,"AjFArWa_manu"))	printf("0_AjFArWa_manu");
	else  if(!strcmp(aux_verb,"AjFArWa_rA"))	printf("0_AjFArWa_rA");
	else  if(!strcmp(aux_verb,"AjFArWa_ve"))	printf("0_AjFArWa_ve");
	else  if(!strcmp(aux_verb,"a_joVccu"))	printf("0_a joVccu");
	else  if(!strcmp(aux_verb,"aka"))	printf("0_aka");
	else  if(!strcmp(aux_verb,"aka_A"))	printf("0_aka");
	else  if(!strcmp(aux_verb,"aka_ani"))	printf("0_aka_ani");
	else  if(!strcmp(aux_verb,"aka_annamAta"))	printf("0_aka_annamAta");
	else  if(!strcmp(aux_verb,"aka_attuMxi"))	printf("0_aka_attuMxi");
	else  if(!strcmp(aux_verb,"aka_e"))	printf("0_aka");
	else  if(!strcmp(aux_verb,"aka_gAbolu"))	printf("0_aka_gAbolu");
	else  if(!strcmp(aux_verb,"aka_ganaka"))	printf("0_aka_ganaka");
	else  if(!strcmp(aux_verb,"aka_gAni"))	printf("0_aka_gAni");
	else  if(!strcmp(aux_verb,"aka_gaxA"))	printf("0_aka_gaxA");
	else  if(!strcmp(aux_verb,"aka_gaxU"))	printf("0_aka_gaxU");
	else  if(!strcmp(aux_verb,"aka_le"))	printf("0_aka_le");
	else  if(!strcmp(aux_verb,"aka_mAnu"))	printf("0_aka_mAnu");
	else  if(!strcmp(aux_verb,"aka_muMxu"))	printf("0_aka_muMxu");
	else  if(!strcmp(aux_verb,"aka_o"))	printf("0_aka");
	else  if(!strcmp(aux_verb,"aka_po"))	printf("0_aka_po");
	else  if(!strcmp(aux_verb,"akapowe"))	printf("0_akapowe");
	else  if(!strcmp(aux_verb,"akapowe_A"))	printf("0_akapowe");
	else  if(!strcmp(aux_verb,"akapowe_annA"))	printf("0_akapowe_annA");
	else  if(!strcmp(aux_verb,"akapowe_ata"))	printf("0_akapowe_ata");
	else  if(!strcmp(aux_verb,"akapowe_attuMxi"))	printf("0_akapowe_attuMxi");
	else  if(!strcmp(aux_verb,"akapowe_e"))	printf("0_akapowe");
	else  if(!strcmp(aux_verb,"akapowe_e_gaxa"))	printf("0_akapowe_e_gaxa");
	else  if(!strcmp(aux_verb,"akapowe_gA"))	printf("0_akapowe_gA");
	else  if(!strcmp(aux_verb,"akapowe_ganaka"))	printf("0_akapowe_ganaka");
	else  if(!strcmp(aux_verb,"akapowe_gAni"))	printf("0_akapowe_gAni");
	else  if(!strcmp(aux_verb,"akapowe_gaxa"))	printf("0_akapowe_gaxa");
	else  if(!strcmp(aux_verb,"akapowe_gUdA"))	printf("0_akapowe_gUdA");
	else  if(!strcmp(aux_verb,"akapowe_mAlle"))	printf("0_akapowe_mAlle");
	else  if(!strcmp(aux_verb,"akapowe_mari"))	printf("0_akapowe_mari");
	else  if(!strcmp(aux_verb,"akapowe_o"))	printf("0_akapowe");
	else  if(!strcmp(aux_verb,"akapowe_wappa"))	printf("0_akapowe_wappa");
	else  if(!strcmp(aux_verb,"aka_uMdu"))	printf("0_aka_uMdu");
	else  if(!strcmp(aux_verb,"aka_V"))	printf("0_aka");
	else  if(!strcmp(aux_verb,"aka_wappu"))	printf("0_aka_wappu");
	else  if(!strcmp(aux_verb,"a_komanu"))	printf("0_a_komanu");
	else  if(!strcmp(aux_verb,"aku"))	printf("0_aku");
	else  if(!strcmp(aux_verb,"a_kUdaxu"))	printf("0_a_kUdaxu");
	else  if(!strcmp(aux_verb,"akuMdA"))	printf("0_akuMdA");
	else  if(!strcmp(aux_verb,"akuMdA_A"))	printf("0_akuMdA");
	else  if(!strcmp(aux_verb,"akuMdA_annamAta"))	printf("0_akuMdA_annamAta");
	else  if(!strcmp(aux_verb,"akuMdA_ata"))	printf("0_akuMdA_ata");
	else  if(!strcmp(aux_verb,"akuMdA_attuMxi"))	printf("0_akuMdA_attuMxi");
	else  if(!strcmp(aux_verb,"akuMdA_cUdu"))	printf("0_akuMdA_cUdu");
	else  if(!strcmp(aux_verb,"akuMdA_e"))	printf("0_akuMdA");
	else  if(!strcmp(aux_verb,"akuMdA_EnA"))	printf("0_akuMdA_EnA");
	else  if(!strcmp(aux_verb,"akuMdA_gAbolu"))	printf("0_akuMdA_gAbolu");
	else  if(!strcmp(aux_verb,"akuMdA_gAni"))	printf("0_akuMdA_gAni");
	else  if(!strcmp(aux_verb,"akuMdA_gaxA"))	printf("0_akuMdA_gaxA");
	else  if(!strcmp(aux_verb,"akuMdA_gaxU"))	printf("0_akuMdA_gaxU");
	else  if(!strcmp(aux_verb,"akuMdA_gUdA"))	printf("0_akuMdA_gUdA");
	else  if(!strcmp(aux_verb,"akuMdA_le"))	printf("0_akuMdA_le");
	else  if(!strcmp(aux_verb,"akuMdA_o"))	printf("0_akuMdA");
	else  if(!strcmp(aux_verb,"akuMdA_uMdu"))	printf("0_akuMdA_uMdu");
	else  if(!strcmp(aux_verb,"akunnA"))	printf("0_akunnA");
	else  if(!strcmp(aux_verb,"akunnA_gAni"))	printf("0_akunnA_gAni");
	else  if(!strcmp(aux_verb,"akunnA_gaxU"))	printf("0_akunnA_gaxU");
	else  if(!strcmp(aux_verb,"akunnA_gUdA"))	printf("0_akunnA_gUdA");
	else  if(!strcmp(aux_verb,"akunnA_sare"))	printf("0_akunnA_sare");
	else  if(!strcmp(aux_verb,"Alasi"))	printf("0_Alasi");
	else  if(!strcmp(aux_verb,"a_le"))	printf("0_a_le");
	else  if(!strcmp(aux_verb,"A_le"))	printf("0_A_le");
	else  if(!strcmp(aux_verb,"a_leVMdi"))	printf("0_a_leVMdi");
	else  if(!strcmp(aux_verb,"A_leVMdi"))	printf("0_A_leVMdi");
	else  if(!strcmp(aux_verb,"Ali"))	printf("0_Ali");
	else  if(!strcmp(aux_verb,"Ali_A"))	printf("0_Ali");
	else  if(!strcmp(aux_verb,"Ali_aMdi"))	printf("0_Ali_aMdi");
	else  if(!strcmp(aux_verb,"Ali_ammA"))	printf("0_Ali_ammA");
	else  if(!strcmp(aux_verb,"Ali_aMta"))	printf("0_Ali_aMta");
	else  if(!strcmp(aux_verb,"Ali_aMte"))	printf("0_Ali_aMte");
	else  if(!strcmp(aux_verb,"Ali_ane"))	printf("0_Ali_ane");
	else  if(!strcmp(aux_verb,"Ali_ani"))	printf("0_Ali_ani");
	else  if(!strcmp(aux_verb,"Ali_annamAta"))	printf("0_Ali_annamAta");
	else  if(!strcmp(aux_verb,"Ali_ata"))	printf("0_Ali_ata");
	else  if(!strcmp(aux_verb,"Ali_ayyA"))	printf("0_Ali_ayyA");
	else  if(!strcmp(aux_verb,"Ali_e"))	printf("0_Ali");
	else  if(!strcmp(aux_verb,"Ali_emo"))	printf("0_Ali_emo");
	else  if(!strcmp(aux_verb,"Ali_emonani"))	printf("0_Ali_emonani");
	else  if(!strcmp(aux_verb,"Ali_gAni"))	printf("0_Ali_gAni");
	else  if(!strcmp(aux_verb,"Ali_gaxa"))	printf("0_Ali_gaxa");
	else  if(!strcmp(aux_verb,"Ali_o"))	printf("0_Ali");
	else  if(!strcmp(aux_verb,"Ali_rA"))	printf("0_Ali_rA");
	else  if(!strcmp(aux_verb,"Ali_V"))	printf("0_Ali");
	else  if(!strcmp(aux_verb,"a_mAku"))	printf("0_a_mAku");
	else  if(!strcmp(aux_verb,"a_manu"))	printf("0_a_manu");
	else  if(!strcmp(aux_verb,"an"))	printf("0_an");
	else  if(!strcmp(aux_verb,"an_akkara"))	printf("0_an_akkara");
	else  if(!strcmp(aux_verb,"a_nAraMBiMcu"))	printf("0_a_nAraMBiMcu");
	else  if(!strcmp(aux_verb,"an_avasaraM"))	printf("0_an_avasaraM");
	else  if(!strcmp(aux_verb,"an_e"))	printf("0_an");
	else  if(!strcmp(aux_verb,"an_e_akkara"))	printf("0_an_e_akkara");
	else  if(!strcmp(aux_verb,"an_e_kUdaxu"))	printf("0_an_e_kUdaxu");
	else  if(!strcmp(aux_verb,"a_neru"))	printf("0_a_neru");
	else  if(!strcmp(aux_verb,"an_e_vaxxu"))	printf("0_an_e_vaxxu");
	else  if(!strcmp(aux_verb,"ani"))	printf("0_ani");
	else  if(!strcmp(aux_verb,"ani_aMwa"))	printf("0_ani_aMwa");
	else  if(!strcmp(aux_verb,"ani_aMwagA"))	printf("0_ani_aMwagA");
	else  if(!strcmp(aux_verb,"ani_aMwasepu"))	printf("0_ani_aMwasepu");
	else  if(!strcmp(aux_verb,"ani_aMwavaraku"))	printf("0_ani_aMwavaraku");
	else  if(!strcmp(aux_verb,"ani_aMxuku"))	printf("0_ani_aMxuku");
	else  if(!strcmp(aux_verb,"ani_aMxuna"))	printf("0_ani_aMxuna");
	else  if(!strcmp(aux_verb,"ani_aMxuvalla"))	printf("0_ani_aMxuvalla");
	else  if(!strcmp(aux_verb,"ani_anni"))	printf("0_ani_anni");
	else  if(!strcmp(aux_verb,"ani_appati"))	printf("0_ani_appati");
	else  if(!strcmp(aux_verb,"ani_app_ki"))	printf("0_ani_app_ki");
	else  if(!strcmp(aux_verb,"ani_app_nuMci"))	printf("0_ani_app_nuMci");
	else  if(!strcmp(aux_verb,"ani_appudu"))	printf("0_ani_appudu");
	else  if(!strcmp(aux_verb,"ani_atlu"))	printf("0_ani_atlu");
	else  if(!strcmp(aux_verb,"ani_atlugA"))	printf("0_ani_atlugA");
	else  if(!strcmp(aux_verb,"ani_atuvaMti"))	printf("0_ani_atuvaMti");
	else  if(!strcmp(aux_verb,"ani_co"))	printf("0_ani_co");
	else  if(!strcmp(aux_verb,"a_o"))	printf("0_a");
	else  if(!strcmp(aux_verb,"A_o"))	printf("0_A");
	else  if(!strcmp(aux_verb,"a_paracu"))	printf("0_a_paracu");
	else  if(!strcmp(aux_verb,"a_rA"))	printf("0_a_rA");
	else  if(!strcmp(aux_verb,"A_rA"))	printf("0_A_rA");
	else  if(!strcmp(aux_verb,"a_rAxu"))	printf("0_a_rAxu");
	else  if(!strcmp(aux_verb,"a_sAgu"))	printf("0_a_sAgu");
	else  if(!strcmp(aux_verb,"a_uMdu"))	printf("0_a_uMdu");
	else  if(!strcmp(aux_verb,"a_uta"))	printf("0_a_uta");
	else  if(!strcmp(aux_verb,"A_uta"))	printf("0_A_uta");
	else  if(!strcmp(aux_verb,"a_vaccu"))	printf("0_a_vaccu");
	else  if(!strcmp(aux_verb,"a_valayu"))	printf("0_a_valayu");
	else  if(!strcmp(aux_verb,"a_vaxxu"))	printf("0_a_vaxxu");
	else  if(!strcmp(aux_verb,"Avy"))	printf("0_Avy");
	else  if(!strcmp(aux_verb,"avy_0"))	printf("0");
	else  if(!strcmp(aux_verb,"avy_A"))	printf("0");
	else  if(!strcmp(aux_verb,"avy_e"))	printf("0");
	else  if(!strcmp(aux_verb,"avy_gAni"))	printf("0_gAni");
	else  if(!strcmp(aux_verb,"avy_o"))	printf("0");
	else  if(!strcmp(aux_verb,"avy_V"))	printf("0");
	else  if(!strcmp(aux_verb,"a_wagu"))	printf("0_a_wagu");
	else  if(!strcmp(aux_verb,"a_walacu"))	printf("0_a_walacu");
	else  if(!strcmp(aux_verb,"a_wiyyi"))	printf("0_a_wiyyi");
	else  if(!strcmp(aux_verb,"e"))	printf("0_e");
	else  if(!strcmp(aux_verb,"e_aMwa"))	printf("0_e_aMwa");
	else  if(!strcmp(aux_verb,"e_aMwagA"))	printf("0_e_aMwagA");
	else  if(!strcmp(aux_verb,"e_aMwalo"))	printf("0_e_aMwalo");
	else  if(!strcmp(aux_verb,"e_aMwasepu"))	printf("0_e_aMwasepu");
	else  if(!strcmp(aux_verb,"e_aMwavaraku"))	printf("0_e_aMwavaraku");
	else  if(!strcmp(aux_verb,"e_anni"))	printf("0_e_anni");
	else  if(!strcmp(aux_verb,"e_appudu"))	printf("0_e_appudu");
	else  if(!strcmp(aux_verb,"e_atlu"))	printf("0_e_atlu");
	else  if(!strcmp(aux_verb,"e_atuvaMti"))	printf("0_e_atuvaMti");
	else  if(!strcmp(aux_verb,"e_eMxuku"))	printf("0_e_eMxuku");
	else  if(!strcmp(aux_verb,"e_kannA"))	printf("0_e_kannA");
	else  if(!strcmp(aux_verb,"e_koVxxi"))	printf("0_e_koVxxi");
	else  if(!strcmp(aux_verb,"e_lA"))	printf("0_e_lA");
	else  if(!strcmp(aux_verb,"e_lopala"))	printf("0_e_lopala");
	else  if(!strcmp(aux_verb,"e_lopuna"))	printf("0_e_lopuna");
	else  if(!strcmp(aux_verb,"e_muMxu"))	printf("0_e_muMxu");
	else  if(!strcmp(aux_verb,"e_pAtiki"))	printf("0_e_pAtiki");
	else  if(!strcmp(aux_verb,"e_sariki"))	printf("0_e_sariki");
	else  if(!strcmp(aux_verb,"e_valla"))	printf("0_e_valla");
	else  if(!strcmp(aux_verb,"e_varaku"))	printf("0_e_varaku");
	else  if(!strcmp(aux_verb,"e_xAkA"))	printf("0_e_xAkA");
	else  if(!strcmp(aux_verb,"i"))	printf("0_i");
	else  if(!strcmp(aux_verb,"i_A"))	printf("0_i");
	else  if(!strcmp(aux_verb,"i_annamAta"))	printf("0_i_annamAta");
	else  if(!strcmp(aux_verb,"i_attuMxi"))	printf("0_i_attuMxi");
	else  if(!strcmp(aux_verb,"i_cUdu"))	printf("0_i_cUdu");
	else  if(!strcmp(aux_verb,"i_e"))	printf("0_i");
	else  if(!strcmp(aux_verb,"i_EnA"))	printf("0_i_EnA");
	else  if(!strcmp(aux_verb,"i_gA"))	printf("0_i_gA");
	else  if(!strcmp(aux_verb,"i_gAbolu"))	printf("0_i_gAbolu");
	else  if(!strcmp(aux_verb,"i_gAni"))	printf("0_i_gAni");
	else  if(!strcmp(aux_verb,"i_gaxa"))	printf("0_i_gaxa");
	else  if(!strcmp(aux_verb,"i_gaxu"))	printf("0_i_gaxu");
	else  if(!strcmp(aux_verb,"i_gUdA"))	printf("0_i_gUdA");
	else  if(!strcmp(aux_verb,"i_le"))	printf("0_i_le");
	else  if(!strcmp(aux_verb,"ina"))	printf("0_ina");
	else  if(!strcmp(aux_verb,"inA"))	printf("0_inA");
	else  if(!strcmp(aux_verb,"ina_Aka"))	printf("0_ina_Aka");
	else  if(!strcmp(aux_verb,"ina_aMwa"))	printf("0_ina_aMwa");
	else  if(!strcmp(aux_verb,"ina_aMwagA"))	printf("0_ina_aMwagA");
	else  if(!strcmp(aux_verb,"ina_aMwalo"))	printf("0_ina_aMwalo");
	else  if(!strcmp(aux_verb,"ina_aMwasepu"))	printf("0_ina_aMwasepu");
	else  if(!strcmp(aux_verb,"ina_aMwavaraku"))	printf("0_ina_aMwavaraku");
	else  if(!strcmp(aux_verb,"ina_aMxuku"))	printf("0_ina_aMxuku");
	else  if(!strcmp(aux_verb,"ina_aMxuna"))	printf("0_ina_aMxuna");
	else  if(!strcmp(aux_verb,"ina_aMxuvalla"))	printf("0_ina_aMxuvalla");
	else  if(!strcmp(aux_verb,"ina_anni"))	printf("0_ina_anni");
	else  if(!strcmp(aux_verb,"ina_appati"))	printf("0_ina_appati");
	else  if(!strcmp(aux_verb,"ina_app_ki"))	printf("0_ina_app_ki");
	else  if(!strcmp(aux_verb,"ina_app_nuMci"))	printf("0_ina_app_nuMci");
	else  if(!strcmp(aux_verb,"ina_appudu"))	printf("0_ina_appudu");
	else  if(!strcmp(aux_verb,"ina_atlu"))	printf("0_ina_atlu");
	else  if(!strcmp(aux_verb,"ina_atlugA"))	printf("0_ina_atlugA");
	else  if(!strcmp(aux_verb,"ina_atuvaMti"))	printf("0_ina_atuvaMti");
	else  if(!strcmp(aux_verb,"ina_co"))	printf("0_ina_co");
	else  if(!strcmp(aux_verb,"ina_gAni"))	printf("0_ina_gAni");
	else  if(!strcmp(aux_verb,"inA_gAni"))	printf("0_inA_gAni");
	else  if(!strcmp(aux_verb,"inA_gaxU"))	printf("0_inA_gaxU");
	else  if(!strcmp(aux_verb,"inA_gUdA"))	printf("0_inA_gUdA");
	else  if(!strcmp(aux_verb,"ina_koVxxi"))	printf("0_ina_koVxxi");
	else  if(!strcmp(aux_verb,"ina_lopala"))	printf("0_ina_lopala");
	else  if(!strcmp(aux_verb,"inA_sare"))	printf("0_inA_sare");
	else  if(!strcmp(aux_verb,"ina_xAkA"))	printf("0_ina_xAkA");
	else  if(!strcmp(aux_verb,"i_o"))	printf("0_i");
	else  if(!strcmp(aux_verb,"i_pAreVyyi"))	printf("0_i_pAreVyyi");
	else  if(!strcmp(aux_verb,"i_peVttu"))	printf("0_i_peVttu");
	else  if(!strcmp(aux_verb,"i_po"))	printf("0_i_po");
	else  if(!strcmp(aux_verb,"i_uMdu"))	printf("0_i_uMdu");
	else  if(!strcmp(aux_verb,"i_V"))	printf("0_i");
	else  if(!strcmp(aux_verb,"i_vaccu"))	printf("0_i_vaccu");
	else  if(!strcmp(aux_verb,"i_veVyyi"))	printf("0_i_veVyyi");
	else  if(!strcmp(aux_verb,"iwi"))	printf("0_iwi");
	else  if(!strcmp(aux_verb,"iwi_A"))	printf("0_iwi");
	else  if(!strcmp(aux_verb,"iwi_alle"))	printf("0_iwi_alle");
	else  if(!strcmp(aux_verb,"iwi_aMdi"))	printf("0_iwi_aMdi");
	else  if(!strcmp(aux_verb,"iwi_ani"))	printf("0_iwi_ani");
	else  if(!strcmp(aux_verb,"iwi_annamAta"))	printf("0_iwi_annamAta");
	else  if(!strcmp(aux_verb,"iwi_ata"))	printf("0_iwi_ata");
	else  if(!strcmp(aux_verb,"iwi_e"))	printf("0_iwi");
	else  if(!strcmp(aux_verb,"iwi_le"))	printf("0_iwi_le");
	else  if(!strcmp(aux_verb,"iwi_leVMdi"))	printf("0_iwi_leVMdi");
	else  if(!strcmp(aux_verb,"iwi_o"))	printf("0_iwi");
	else  if(!strcmp(aux_verb,"iwi_rA"))	printf("0_iwi_rA");
	else  if(!strcmp(aux_verb,"i_wIru"))	printf("0_i_wIru");
	else  if(!strcmp(aux_verb,"iwi_uta"))	printf("0_iwi_uta");
	else  if(!strcmp(aux_verb,"koVn"))	printf("0_koVn");
	else  if(!strcmp(aux_verb,"ko_lexA"))	printf("0_ko_le");
	else  if(!strcmp(aux_verb,"neg_np"))	printf("0");
	else  if(!strcmp(aux_verb,"neg_np_emp"))	printf("0");
	else  if(!strcmp(aux_verb,"neg_pst"))	printf("0_neg pst");
	else  if(!strcmp(aux_verb,"neg_pst_emp"))	printf("0_neg pst e emp");
	else  if(!strcmp(aux_verb,"uxu"))	printf("0_uxu");
	else  if(!strcmp(aux_verb,"uxu_A"))	printf("0_uxu");
	else  if(!strcmp(aux_verb,"uxu_alle"))	printf("0_uxu_alle");
	else  if(!strcmp(aux_verb,"uxu_aMdi"))	printf("0_uxu_aMdi");
	else  if(!strcmp(aux_verb,"uxu_ani"))	printf("0_uxu_ani");
	else  if(!strcmp(aux_verb,"uxu_annamAta"))	printf("0_uxu_annamAta");
	else  if(!strcmp(aux_verb,"uxu_ata"))	printf("0_uxu_ata");
	else  if(!strcmp(aux_verb,"uxu_e"))	printf("0_uxu");
	else  if(!strcmp(aux_verb,"uxu_le"))	printf("0_uxu_le");
	else  if(!strcmp(aux_verb,"uxu_leVMdi"))	printf("0_uxu_leVMdi");
	else  if(!strcmp(aux_verb,"uxu_o"))	printf("0_uxu");
	else  if(!strcmp(aux_verb,"uxu_rA"))	printf("0_uxu_rA");
	else  if(!strcmp(aux_verb,"uxu_uta"))	printf("0_uxu_uta");
	else  if(!strcmp(aux_verb,"wA"))	printf("0_wA");
	else  if(!strcmp(aux_verb,"wA_A"))	printf("0_wA");
	else  if(!strcmp(aux_verb,"wA_alle"))	printf("0_wA_alle");
	else  if(!strcmp(aux_verb,"wA_aMdi"))	printf("0_wA_aMdi");
	else  if(!strcmp(aux_verb,"wA_ani"))	printf("0_wA_ani");
	else  if(!strcmp(aux_verb,"wA_annamAta"))	printf("0_wA_annamAta");
	else  if(!strcmp(aux_verb,"wA_ata"))	printf("0_wA_ata");
	else  if(!strcmp(aux_verb,"wA_e"))	printf("0_wA");
	else  if(!strcmp(aux_verb,"wA_le"))	printf("0_wA_le");
	else  if(!strcmp(aux_verb,"wA_leVMdi"))	printf("0_wA_leVMdi");
	else  if(!strcmp(aux_verb,"wA_o"))	printf("0_wA");
	else  if(!strcmp(aux_verb,"wA_rA"))	printf("0_wA_rA");
	else  if(!strcmp(aux_verb,"wA_uta"))	printf("0_wA_uta");
	else  if(!strcmp(aux_verb,"we"))	printf("0_we");
	else  if(!strcmp(aux_verb,"we_A"))	printf("0_we");
	else  if(!strcmp(aux_verb,"we_annA"))	printf("0_we_annA");
	else  if(!strcmp(aux_verb,"we_ata"))	printf("0_we_ata");
	else  if(!strcmp(aux_verb,"we_attuMxi"))	printf("0_we_attuMxi");
	else  if(!strcmp(aux_verb,"we_e"))	printf("0_we");
	else  if(!strcmp(aux_verb,"we_e_gaxa"))	printf("0_we_e_gaxa");
	else  if(!strcmp(aux_verb,"we_gA"))	printf("0_we_gA");
	else  if(!strcmp(aux_verb,"we_gAni"))	printf("0_we_gAni");
	else  if(!strcmp(aux_verb,"we_ganuka"))	printf("0_we_ganuka");
	else  if(!strcmp(aux_verb,"we_gaxa"))	printf("0_we_gaxa");
	else  if(!strcmp(aux_verb,"we_gUdA"))	printf("0_we_gUdA");
	else  if(!strcmp(aux_verb,"we_mAlle"))	printf("0_we_mAlle");
	else  if(!strcmp(aux_verb,"we_mari"))	printf("0_we_mari");
	else  if(!strcmp(aux_verb,"we_o"))	printf("0_we");
	else  if(!strcmp(aux_verb,"we_wappa"))	printf("0_we_wappa");
	else  if(!strcmp(aux_verb,"wU"))	printf("0_wU");
	else  if(!strcmp(aux_verb,"wU_A"))	printf("0_wU");
	else  if(!strcmp(aux_verb,"wU_annamAta"))	printf("0_wU_annamAta");
	else  if(!strcmp(aux_verb,"wU_ata"))	printf("0_wU ata");
	else  if(!strcmp(aux_verb,"wU_attuMxi"))	printf("0_wU_attuMxi");
	else  if(!strcmp(aux_verb,"wU_e"))	printf("0_wU");
	else  if(!strcmp(aux_verb,"wU_EnA"))	printf("0_wU_EnA");
	else  if(!strcmp(aux_verb,"wU_gAbolu"))	printf("0_wU_gAbolu");
	else  if(!strcmp(aux_verb,"wU_gAni"))	printf("0_wU_gAni");
	else  if(!strcmp(aux_verb,"wU_gaxa"))	printf("0_wU_gaxa");
	else  if(!strcmp(aux_verb,"wU_gaxu"))	printf("0_wU_gaxu");
	else  if(!strcmp(aux_verb,"wU_gUdA"))	printf("0_wU_gUdA");
	else  if(!strcmp(aux_verb,"wU_le"))	printf("0_wU_le");
	else  if(!strcmp(aux_verb,"wuMtA"))	printf("0_wuMtA");
	else  if(!strcmp(aux_verb,"wuMtA_A"))	printf("0_wuMtA");
	else  if(!strcmp(aux_verb,"wuMtA_alle"))	printf("0_wuMtA_alle");
	else  if(!strcmp(aux_verb,"wuMtA_aMdi"))	printf("0_wuMtA_aMdi");
	else  if(!strcmp(aux_verb,"wuMtA_ani"))	printf("0_wuMtA_ani");
	else  if(!strcmp(aux_verb,"wuMtA_annamAta"))	printf("0_wuMtA_annamAta");
	else  if(!strcmp(aux_verb,"wuMtA_ata"))	printf("0_wuMtA_ata");
	else  if(!strcmp(aux_verb,"wuMtA_e"))	printf("0_wuMtA");
	else  if(!strcmp(aux_verb,"wuMtA_le"))	printf("0_wuMtA_le");
	else  if(!strcmp(aux_verb,"wuMtA_leVMdi"))	printf("0_wuMtA_leVMdi");
	else  if(!strcmp(aux_verb,"wuMtA_o"))	printf("0_wuMtA");
	else  if(!strcmp(aux_verb,"wuMtA_rA"))	printf("0_wuMtA_rA");
	else  if(!strcmp(aux_verb,"wuMtA_uta"))	printf("0_wuMtA_uta");
	else  if(!strcmp(aux_verb,"wuMte"))	printf("0_wuMte");
	else  if(!strcmp(aux_verb,"wuMte_A"))	printf("0_wuMte");
	else  if(!strcmp(aux_verb,"wuMte_alle"))	printf("0_wuMte_alle");
	else  if(!strcmp(aux_verb,"wuMte_annA"))	printf("0_wuMte_annA");
	else  if(!strcmp(aux_verb,"wuMte_ata"))	printf("0_wuMte_ata");
	else  if(!strcmp(aux_verb,"wuMte_attuMxi"))	printf("0_wuMte_attuMxi");
	else  if(!strcmp(aux_verb,"wuMte_e"))	printf("0_wuMte");
	else  if(!strcmp(aux_verb,"wuMte_e_gaxa"))	printf("0_wuMte_e_gaxa");
	else  if(!strcmp(aux_verb,"wuMte_gA"))	printf("0_wuMte gA");
	else  if(!strcmp(aux_verb,"wuMte_ganaka"))	printf("0_wuMte_ganaka");
	else  if(!strcmp(aux_verb,"wuMte_gAni"))	printf("0_wuMte_gAni");
	else  if(!strcmp(aux_verb,"wuMte_gaxa"))	printf("0_wuMte_gaxa");
	else  if(!strcmp(aux_verb,"wuMte_gUdA"))	printf("0_wuMte_gUdA");
	else  if(!strcmp(aux_verb,"wuMte_mari"))	printf("0_wuMte mari");
	else  if(!strcmp(aux_verb,"wuMte_o"))	printf("0_wuMte");
	else  if(!strcmp(aux_verb,"wuMte_wappa"))	printf("0_wuMte_wappa");
	else  if(!strcmp(aux_verb,"wunn"))	printf("0_wunn");
	else  if(!strcmp(aux_verb,"wunna"))	printf("0_wunna");
	else  if(!strcmp(aux_verb,"wunnA"))	printf("0_wunnA");
	else  if(!strcmp(aux_verb,"wunn_A"))	printf("0_wunn");
	else  if(!strcmp(aux_verb,"wunna_aMwa"))	printf("0_wunna_aMwa");
	else  if(!strcmp(aux_verb,"wunna_aMwagA"))	printf("0_wunna_aMwagA");
	else  if(!strcmp(aux_verb,"wunna_aMwalo"))	printf("0_wunna_aMwalo");
	else  if(!strcmp(aux_verb,"wunna_aMwasepu"))	printf("0_wunna_aMwasepu");
	else  if(!strcmp(aux_verb,"wunna_aMwavaraku"))	printf("0_wunna_aMwavaraku");
	else  if(!strcmp(aux_verb,"wunna_aMxuku"))	printf("0_wunna_aMxuku");
	else  if(!strcmp(aux_verb,"wunna_aMxuna"))	printf("0_wunna_aMxuna");
	else  if(!strcmp(aux_verb,"wunna_aMxuvalana"))	printf("0_wunna_aMxuvalana");
	else  if(!strcmp(aux_verb,"wunna_anni"))	printf("0_wunna_anni");
	else  if(!strcmp(aux_verb,"wunna_app_ki"))	printf("0_wunna_app_ki");
	else  if(!strcmp(aux_verb,"wunna_app_nuMci"))	printf("0_wunna_app_nuMci");
	else  if(!strcmp(aux_verb,"wunna_app_ti"))	printf("0_wunna_app_ti");
	else  if(!strcmp(aux_verb,"wunna_appudu"))	printf("0_wunna_appudu");
	else  if(!strcmp(aux_verb,"wunna_atlu"))	printf("0_wunna_atlu");
	else  if(!strcmp(aux_verb,"wunna_atlugA"))	printf("0_wunna_atlugA");
	else  if(!strcmp(aux_verb,"wunna_atuvaMti"))	printf("0_wunna_atuvaMti");
	else  if(!strcmp(aux_verb,"wunna_co"))	printf("0_wunna_co");
	else  if(!strcmp(aux_verb,"wunnA_gAni"))	printf("0_wunnA_gAni");
	else  if(!strcmp(aux_verb,"wunnA_gaxU"))	printf("0_wunnA_gaxU");
	else  if(!strcmp(aux_verb,"wunnA_gUdA"))	printf("0_wunnA_gUdA");
	else  if(!strcmp(aux_verb,"wunna_koVxxi"))	printf("0_wunna_koVxxi");
	else  if(!strcmp(aux_verb,"wunn_alle"))	printf("0_wunn_alle");
	else  if(!strcmp(aux_verb,"wunna_lopala"))	printf("0_wunna_lopala");
	else  if(!strcmp(aux_verb,"wunn_aMdi"))	printf("0_wunn_aMdi");
	else  if(!strcmp(aux_verb,"wunn_ani"))	printf("0_wunn_ani");
	else  if(!strcmp(aux_verb,"wunn_annamAta"))	printf("0_wunn_annamAta");
	else  if(!strcmp(aux_verb,"wunnA_sare"))	printf("0_wunnA_sare");
	else  if(!strcmp(aux_verb,"wunn_ata"))	printf("0_wunn_ata");
	else  if(!strcmp(aux_verb,"wunna_xAkA"))	printf("0_wunna_xAkA");
	else  if(!strcmp(aux_verb,"wunn_e"))	printf("0_wunn");
	else  if(!strcmp(aux_verb,"wunn_le"))	printf("0_wunn_le");
	else  if(!strcmp(aux_verb,"wunn_leVMdi"))	printf("0_wunn_leVMdi");
	else  if(!strcmp(aux_verb,"wunn_o"))	printf("0_wunn");
	else  if(!strcmp(aux_verb,"wunn_rA"))	printf("0_wunn_rA");
	else  if(!strcmp(aux_verb,"wunn_uta"))	printf("0_wunn_uta");
	else  if(!strcmp(aux_verb,"wU_o"))	printf("0_wU");
	else  if(!strcmp(aux_verb,"wU_po"))	printf("0_wU_po");
	else  if(!strcmp(aux_verb,"wU_uMdu"))	printf("0_wU_uMdu");
	else  if(!strcmp(aux_verb,"wU_vaccu"))	printf("0_wU_vaccu");
	else  if(!strcmp(aux_verb,"xA"))	printf("0_xA");
	else  if(!strcmp(aux_verb,"xA_A"))	printf("0_xA");
	else  if(!strcmp(aux_verb,"xA_alle"))	printf("0_xA_alle");
	else  if(!strcmp(aux_verb,"xA_aMdi"))	printf("0_xA_aMdi");
	else  if(!strcmp(aux_verb,"xA_ani"))	printf("0_xA_ani");
	else  if(!strcmp(aux_verb,"xA_annamAta"))	printf("0_xA_annamAta");
	else  if(!strcmp(aux_verb,"xA_ata"))	printf("0_xA_ata");
	else  if(!strcmp(aux_verb,"xA_e"))	printf("0_xA");
	else  if(!strcmp(aux_verb,"xA_le"))	printf("0_xA_le");
	else  if(!strcmp(aux_verb,"xA_leVMdi"))	printf("0_xA_leVMdi");
	else  if(!strcmp(aux_verb,"xA_o"))	printf("0_xA");
	else  if(!strcmp(aux_verb,"xA_rA"))	printf("0_xA_rA");
	else  if(!strcmp(aux_verb,"xA_uta"))	printf("0_xA_uta");
	else printf("%s",aux_verb);
   }