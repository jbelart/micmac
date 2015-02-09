// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cEqAppui_TerFix_M2CFour15x2.h"


cEqAppui_TerFix_M2CFour15x2::cEqAppui_TerFix_M2CFour15x2():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,18));
   AddIntRef (cIncIntervale("Orient",18,24));
   Close(false);
}



void cEqAppui_TerFix_M2CFour15x2::ComputeVal()
{
   double tmp0_ = mCompCoord[18];
   double tmp1_ = mCompCoord[19];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[20];
   double tmp7_ = mCompCoord[21];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[22];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[23];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = -(tmp3_);
   double tmp18_ = tmp4_*tmp11_;
   double tmp19_ = tmp3_*tmp11_;
   double tmp20_ = mCompCoord[0];
   double tmp21_ = tmp17_*tmp10_;
   double tmp22_ = tmp18_*tmp12_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp8_);
   double tmp25_ = tmp4_*tmp10_;
   double tmp26_ = tmp19_*tmp12_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp14_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp2_*tmp12_;
   double tmp31_ = tmp30_*(tmp16_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = tmp20_/(tmp32_);
   double tmp34_ = tmp4_*tmp2_;
   double tmp35_ = tmp34_*(tmp8_);
   double tmp36_ = tmp3_*tmp2_;
   double tmp37_ = tmp36_*(tmp14_);
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = tmp5_*(tmp16_);
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)*(tmp33_);
   double tmp42_ = mCompCoord[1];
   double tmp43_ = tmp41_+tmp42_;
   double tmp44_ = (tmp43_)-mLocFour15x2_State_1_0;
   double tmp45_ = (tmp44_)/mLocFour15x2_State_0_0;
   double tmp46_ = tmp17_*tmp12_;
   double tmp47_ = tmp18_*tmp9_;
   double tmp48_ = tmp46_+tmp47_;
   double tmp49_ = (tmp48_)*(tmp8_);
   double tmp50_ = tmp4_*tmp12_;
   double tmp51_ = tmp19_*tmp9_;
   double tmp52_ = tmp50_+tmp51_;
   double tmp53_ = (tmp52_)*(tmp14_);
   double tmp54_ = tmp49_+tmp53_;
   double tmp55_ = tmp2_*tmp9_;
   double tmp56_ = tmp55_*(tmp16_);
   double tmp57_ = tmp54_+tmp56_;
   double tmp58_ = (tmp57_)*(tmp33_);
   double tmp59_ = mCompCoord[2];
   double tmp60_ = tmp58_+tmp59_;
   double tmp61_ = (tmp60_)-mLocFour15x2_State_2_0;
   double tmp62_ = (tmp61_)/mLocFour15x2_State_0_0;
   double tmp63_ = mCompCoord[9];
   double tmp64_ = tmp45_-tmp63_;
   double tmp65_ = mCompCoord[10];
   double tmp66_ = tmp62_-tmp65_;
   double tmp67_ = (tmp64_)*(tmp64_);
   double tmp68_ = (tmp66_)*(tmp66_);
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = (tmp69_)*(tmp69_);
   double tmp71_ = tmp70_*(tmp69_);
   double tmp72_ = tmp71_*(tmp69_);
   double tmp73_ = tmp72_*(tmp69_);
   double tmp74_ = tmp73_*(tmp69_);
   double tmp75_ = mCompCoord[3];
   double tmp76_ = mCompCoord[4];
   double tmp77_ = mCompCoord[5];
   double tmp78_ = (tmp45_)*(tmp62_);
   double tmp79_ = mCompCoord[6];
   double tmp80_ = (tmp62_)*(tmp62_);
   double tmp81_ = (tmp45_)*(tmp45_);
   double tmp82_ = mCompCoord[11];
   double tmp83_ = tmp82_*(tmp69_);
   double tmp84_ = mCompCoord[12];
   double tmp85_ = tmp84_*tmp70_;
   double tmp86_ = tmp83_+tmp85_;
   double tmp87_ = mCompCoord[13];
   double tmp88_ = tmp87_*tmp71_;
   double tmp89_ = tmp86_+tmp88_;
   double tmp90_ = mCompCoord[14];
   double tmp91_ = tmp90_*tmp72_;
   double tmp92_ = tmp89_+tmp91_;
   double tmp93_ = mCompCoord[15];
   double tmp94_ = tmp93_*tmp73_;
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = mCompCoord[16];
   double tmp97_ = tmp96_*tmp74_;
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = mCompCoord[17];
   double tmp100_ = tmp74_*(tmp69_);
   double tmp101_ = tmp99_*tmp100_;
   double tmp102_ = tmp98_+tmp101_;

  mVal[0] = ((mLocFour15x2_State_1_0+(((1+tmp75_)*(tmp45_)+tmp76_*(tmp62_))-tmp77_*2*tmp81_+tmp79_*tmp78_+mCompCoord[7]*tmp80_+(tmp64_)*(tmp102_))*mLocFour15x2_State_0_0)-mLocXIm)*mLocScNorm;

  mVal[1] = ((mLocFour15x2_State_2_0+(((1-tmp75_)*(tmp62_)+tmp76_*(tmp45_)+tmp77_*tmp78_)-tmp79_*2*tmp80_+mCompCoord[8]*tmp81_+(tmp66_)*(tmp102_))*mLocFour15x2_State_0_0)-mLocYIm)*mLocScNorm;

}


void cEqAppui_TerFix_M2CFour15x2::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[18];
   double tmp1_ = mCompCoord[19];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[20];
   double tmp7_ = mCompCoord[21];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[22];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[23];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = -(tmp3_);
   double tmp18_ = tmp4_*tmp11_;
   double tmp19_ = tmp3_*tmp11_;
   double tmp20_ = mCompCoord[0];
   double tmp21_ = tmp17_*tmp10_;
   double tmp22_ = tmp18_*tmp12_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp8_);
   double tmp25_ = tmp4_*tmp10_;
   double tmp26_ = tmp19_*tmp12_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp14_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp2_*tmp12_;
   double tmp31_ = tmp30_*(tmp16_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = tmp20_/(tmp32_);
   double tmp34_ = tmp4_*tmp2_;
   double tmp35_ = tmp34_*(tmp8_);
   double tmp36_ = tmp3_*tmp2_;
   double tmp37_ = tmp36_*(tmp14_);
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = tmp5_*(tmp16_);
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)*(tmp33_);
   double tmp42_ = mCompCoord[1];
   double tmp43_ = tmp41_+tmp42_;
   double tmp44_ = (tmp43_)-mLocFour15x2_State_1_0;
   double tmp45_ = (tmp44_)/mLocFour15x2_State_0_0;
   double tmp46_ = tmp17_*tmp12_;
   double tmp47_ = tmp18_*tmp9_;
   double tmp48_ = tmp46_+tmp47_;
   double tmp49_ = (tmp48_)*(tmp8_);
   double tmp50_ = tmp4_*tmp12_;
   double tmp51_ = tmp19_*tmp9_;
   double tmp52_ = tmp50_+tmp51_;
   double tmp53_ = (tmp52_)*(tmp14_);
   double tmp54_ = tmp49_+tmp53_;
   double tmp55_ = tmp2_*tmp9_;
   double tmp56_ = tmp55_*(tmp16_);
   double tmp57_ = tmp54_+tmp56_;
   double tmp58_ = (tmp57_)*(tmp33_);
   double tmp59_ = mCompCoord[2];
   double tmp60_ = tmp58_+tmp59_;
   double tmp61_ = (tmp60_)-mLocFour15x2_State_2_0;
   double tmp62_ = (tmp61_)/mLocFour15x2_State_0_0;
   double tmp63_ = mCompCoord[9];
   double tmp64_ = tmp45_-tmp63_;
   double tmp65_ = mCompCoord[10];
   double tmp66_ = tmp62_-tmp65_;
   double tmp67_ = (tmp64_)*(tmp64_);
   double tmp68_ = (tmp66_)*(tmp66_);
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = (tmp69_)*(tmp69_);
   double tmp71_ = tmp70_*(tmp69_);
   double tmp72_ = tmp71_*(tmp69_);
   double tmp73_ = tmp72_*(tmp69_);
   double tmp74_ = tmp73_*(tmp69_);
   double tmp75_ = mCompCoord[3];
   double tmp76_ = 1+tmp75_;
   double tmp77_ = ElSquare(tmp32_);
   double tmp78_ = (tmp32_)/tmp77_;
   double tmp79_ = ElSquare(mLocFour15x2_State_0_0);
   double tmp80_ = mCompCoord[4];
   double tmp81_ = (tmp78_)*(tmp40_);
   double tmp82_ = tmp81_*mLocFour15x2_State_0_0;
   double tmp83_ = (tmp82_)/tmp79_;
   double tmp84_ = (tmp83_)*(tmp45_);
   double tmp85_ = mCompCoord[5];
   double tmp86_ = tmp85_*2;
   double tmp87_ = (tmp78_)*(tmp57_);
   double tmp88_ = tmp87_*mLocFour15x2_State_0_0;
   double tmp89_ = (tmp88_)/tmp79_;
   double tmp90_ = mCompCoord[6];
   double tmp91_ = (tmp89_)*(tmp62_);
   double tmp92_ = mCompCoord[7];
   double tmp93_ = mCompCoord[11];
   double tmp94_ = tmp93_*(tmp69_);
   double tmp95_ = mCompCoord[12];
   double tmp96_ = tmp95_*tmp70_;
   double tmp97_ = tmp94_+tmp96_;
   double tmp98_ = mCompCoord[13];
   double tmp99_ = tmp98_*tmp71_;
   double tmp100_ = tmp97_+tmp99_;
   double tmp101_ = mCompCoord[14];
   double tmp102_ = tmp101_*tmp72_;
   double tmp103_ = tmp100_+tmp102_;
   double tmp104_ = mCompCoord[15];
   double tmp105_ = tmp104_*tmp73_;
   double tmp106_ = tmp103_+tmp105_;
   double tmp107_ = mCompCoord[16];
   double tmp108_ = tmp107_*tmp74_;
   double tmp109_ = tmp106_+tmp108_;
   double tmp110_ = mCompCoord[17];
   double tmp111_ = tmp74_*(tmp69_);
   double tmp112_ = tmp110_*tmp111_;
   double tmp113_ = tmp109_+tmp112_;
   double tmp114_ = (tmp83_)*(tmp64_);
   double tmp115_ = (tmp89_)*(tmp66_);
   double tmp116_ = tmp114_+tmp114_;
   double tmp117_ = tmp115_+tmp115_;
   double tmp118_ = tmp116_+tmp117_;
   double tmp119_ = (tmp118_)*(tmp69_);
   double tmp120_ = tmp119_+tmp119_;
   double tmp121_ = (tmp120_)*(tmp69_);
   double tmp122_ = (tmp118_)*tmp70_;
   double tmp123_ = tmp121_+tmp122_;
   double tmp124_ = (tmp123_)*(tmp69_);
   double tmp125_ = (tmp118_)*tmp71_;
   double tmp126_ = tmp124_+tmp125_;
   double tmp127_ = (tmp126_)*(tmp69_);
   double tmp128_ = (tmp118_)*tmp72_;
   double tmp129_ = tmp127_+tmp128_;
   double tmp130_ = (tmp129_)*(tmp69_);
   double tmp131_ = (tmp118_)*tmp73_;
   double tmp132_ = tmp130_+tmp131_;
   double tmp133_ = mLocFour15x2_State_0_0/tmp79_;
   double tmp134_ = (tmp133_)*(tmp45_);
   double tmp135_ = (tmp133_)*(tmp64_);
   double tmp136_ = tmp135_+tmp135_;
   double tmp137_ = (tmp136_)*(tmp69_);
   double tmp138_ = tmp137_+tmp137_;
   double tmp139_ = (tmp138_)*(tmp69_);
   double tmp140_ = (tmp136_)*tmp70_;
   double tmp141_ = tmp139_+tmp140_;
   double tmp142_ = (tmp141_)*(tmp69_);
   double tmp143_ = (tmp136_)*tmp71_;
   double tmp144_ = tmp142_+tmp143_;
   double tmp145_ = (tmp144_)*(tmp69_);
   double tmp146_ = (tmp136_)*tmp72_;
   double tmp147_ = tmp145_+tmp146_;
   double tmp148_ = (tmp147_)*(tmp69_);
   double tmp149_ = (tmp136_)*tmp73_;
   double tmp150_ = tmp148_+tmp149_;
   double tmp151_ = (tmp133_)*(tmp62_);
   double tmp152_ = (tmp133_)*(tmp66_);
   double tmp153_ = tmp152_+tmp152_;
   double tmp154_ = (tmp153_)*(tmp69_);
   double tmp155_ = tmp154_+tmp154_;
   double tmp156_ = (tmp155_)*(tmp69_);
   double tmp157_ = (tmp153_)*tmp70_;
   double tmp158_ = tmp156_+tmp157_;
   double tmp159_ = (tmp158_)*(tmp69_);
   double tmp160_ = (tmp153_)*tmp71_;
   double tmp161_ = tmp159_+tmp160_;
   double tmp162_ = (tmp161_)*(tmp69_);
   double tmp163_ = (tmp153_)*tmp72_;
   double tmp164_ = tmp162_+tmp163_;
   double tmp165_ = (tmp164_)*(tmp69_);
   double tmp166_ = (tmp153_)*tmp73_;
   double tmp167_ = tmp165_+tmp166_;
   double tmp168_ = (tmp45_)*(tmp45_);
   double tmp169_ = (tmp45_)*(tmp62_);
   double tmp170_ = (tmp62_)*(tmp62_);
   double tmp171_ = -(1);
   double tmp172_ = tmp171_*(tmp64_);
   double tmp173_ = tmp172_+tmp172_;
   double tmp174_ = (tmp173_)*(tmp69_);
   double tmp175_ = tmp174_+tmp174_;
   double tmp176_ = (tmp175_)*(tmp69_);
   double tmp177_ = (tmp173_)*tmp70_;
   double tmp178_ = tmp176_+tmp177_;
   double tmp179_ = (tmp178_)*(tmp69_);
   double tmp180_ = (tmp173_)*tmp71_;
   double tmp181_ = tmp179_+tmp180_;
   double tmp182_ = (tmp181_)*(tmp69_);
   double tmp183_ = (tmp173_)*tmp72_;
   double tmp184_ = tmp182_+tmp183_;
   double tmp185_ = (tmp184_)*(tmp69_);
   double tmp186_ = (tmp173_)*tmp73_;
   double tmp187_ = tmp185_+tmp186_;
   double tmp188_ = tmp171_*(tmp66_);
   double tmp189_ = tmp188_+tmp188_;
   double tmp190_ = (tmp189_)*(tmp69_);
   double tmp191_ = tmp190_+tmp190_;
   double tmp192_ = (tmp191_)*(tmp69_);
   double tmp193_ = (tmp189_)*tmp70_;
   double tmp194_ = tmp192_+tmp193_;
   double tmp195_ = (tmp194_)*(tmp69_);
   double tmp196_ = (tmp189_)*tmp71_;
   double tmp197_ = tmp195_+tmp196_;
   double tmp198_ = (tmp197_)*(tmp69_);
   double tmp199_ = (tmp189_)*tmp72_;
   double tmp200_ = tmp198_+tmp199_;
   double tmp201_ = (tmp200_)*(tmp69_);
   double tmp202_ = (tmp189_)*tmp73_;
   double tmp203_ = tmp201_+tmp202_;
   double tmp204_ = tmp171_*tmp3_;
   double tmp205_ = -(tmp4_);
   double tmp206_ = tmp204_*tmp11_;
   double tmp207_ = tmp205_*tmp10_;
   double tmp208_ = tmp206_*tmp12_;
   double tmp209_ = tmp207_+tmp208_;
   double tmp210_ = (tmp209_)*(tmp8_);
   double tmp211_ = tmp204_*tmp10_;
   double tmp212_ = tmp211_+tmp22_;
   double tmp213_ = (tmp212_)*(tmp14_);
   double tmp214_ = tmp210_+tmp213_;
   double tmp215_ = tmp20_*(tmp214_);
   double tmp216_ = -(tmp215_);
   double tmp217_ = tmp216_/tmp77_;
   double tmp218_ = tmp204_*tmp2_;
   double tmp219_ = tmp218_*(tmp8_);
   double tmp220_ = tmp34_*(tmp14_);
   double tmp221_ = tmp219_+tmp220_;
   double tmp222_ = (tmp221_)*(tmp33_);
   double tmp223_ = (tmp217_)*(tmp40_);
   double tmp224_ = tmp222_+tmp223_;
   double tmp225_ = (tmp224_)*mLocFour15x2_State_0_0;
   double tmp226_ = (tmp225_)/tmp79_;
   double tmp227_ = (tmp226_)*(tmp45_);
   double tmp228_ = tmp205_*tmp12_;
   double tmp229_ = tmp206_*tmp9_;
   double tmp230_ = tmp228_+tmp229_;
   double tmp231_ = (tmp230_)*(tmp8_);
   double tmp232_ = tmp204_*tmp12_;
   double tmp233_ = tmp232_+tmp47_;
   double tmp234_ = (tmp233_)*(tmp14_);
   double tmp235_ = tmp231_+tmp234_;
   double tmp236_ = (tmp235_)*(tmp33_);
   double tmp237_ = (tmp217_)*(tmp57_);
   double tmp238_ = tmp236_+tmp237_;
   double tmp239_ = (tmp238_)*mLocFour15x2_State_0_0;
   double tmp240_ = (tmp239_)/tmp79_;
   double tmp241_ = (tmp240_)*(tmp62_);
   double tmp242_ = (tmp226_)*(tmp64_);
   double tmp243_ = (tmp240_)*(tmp66_);
   double tmp244_ = tmp242_+tmp242_;
   double tmp245_ = tmp243_+tmp243_;
   double tmp246_ = tmp244_+tmp245_;
   double tmp247_ = (tmp246_)*(tmp69_);
   double tmp248_ = tmp247_+tmp247_;
   double tmp249_ = (tmp248_)*(tmp69_);
   double tmp250_ = (tmp246_)*tmp70_;
   double tmp251_ = tmp249_+tmp250_;
   double tmp252_ = (tmp251_)*(tmp69_);
   double tmp253_ = (tmp246_)*tmp71_;
   double tmp254_ = tmp252_+tmp253_;
   double tmp255_ = (tmp254_)*(tmp69_);
   double tmp256_ = (tmp246_)*tmp72_;
   double tmp257_ = tmp255_+tmp256_;
   double tmp258_ = (tmp257_)*(tmp69_);
   double tmp259_ = (tmp246_)*tmp73_;
   double tmp260_ = tmp258_+tmp259_;
   double tmp261_ = tmp171_*tmp5_;
   double tmp262_ = -(tmp2_);
   double tmp263_ = tmp262_*tmp4_;
   double tmp264_ = tmp262_*tmp3_;
   double tmp265_ = tmp263_*tmp12_;
   double tmp266_ = tmp265_*(tmp8_);
   double tmp267_ = tmp264_*tmp12_;
   double tmp268_ = tmp267_*(tmp14_);
   double tmp269_ = tmp266_+tmp268_;
   double tmp270_ = tmp261_*tmp12_;
   double tmp271_ = tmp270_*(tmp16_);
   double tmp272_ = tmp269_+tmp271_;
   double tmp273_ = tmp20_*(tmp272_);
   double tmp274_ = -(tmp273_);
   double tmp275_ = tmp274_/tmp77_;
   double tmp276_ = tmp261_*tmp4_;
   double tmp277_ = tmp276_*(tmp8_);
   double tmp278_ = tmp261_*tmp3_;
   double tmp279_ = tmp278_*(tmp14_);
   double tmp280_ = tmp277_+tmp279_;
   double tmp281_ = tmp2_*(tmp16_);
   double tmp282_ = tmp280_+tmp281_;
   double tmp283_ = (tmp282_)*(tmp33_);
   double tmp284_ = (tmp275_)*(tmp40_);
   double tmp285_ = tmp283_+tmp284_;
   double tmp286_ = (tmp285_)*mLocFour15x2_State_0_0;
   double tmp287_ = (tmp286_)/tmp79_;
   double tmp288_ = (tmp287_)*(tmp45_);
   double tmp289_ = tmp263_*tmp9_;
   double tmp290_ = tmp289_*(tmp8_);
   double tmp291_ = tmp264_*tmp9_;
   double tmp292_ = tmp291_*(tmp14_);
   double tmp293_ = tmp290_+tmp292_;
   double tmp294_ = tmp261_*tmp9_;
   double tmp295_ = tmp294_*(tmp16_);
   double tmp296_ = tmp293_+tmp295_;
   double tmp297_ = (tmp296_)*(tmp33_);
   double tmp298_ = (tmp275_)*(tmp57_);
   double tmp299_ = tmp297_+tmp298_;
   double tmp300_ = (tmp299_)*mLocFour15x2_State_0_0;
   double tmp301_ = (tmp300_)/tmp79_;
   double tmp302_ = (tmp301_)*(tmp62_);
   double tmp303_ = (tmp287_)*(tmp64_);
   double tmp304_ = (tmp301_)*(tmp66_);
   double tmp305_ = tmp303_+tmp303_;
   double tmp306_ = tmp304_+tmp304_;
   double tmp307_ = tmp305_+tmp306_;
   double tmp308_ = (tmp307_)*(tmp69_);
   double tmp309_ = tmp308_+tmp308_;
   double tmp310_ = (tmp309_)*(tmp69_);
   double tmp311_ = (tmp307_)*tmp70_;
   double tmp312_ = tmp310_+tmp311_;
   double tmp313_ = (tmp312_)*(tmp69_);
   double tmp314_ = (tmp307_)*tmp71_;
   double tmp315_ = tmp313_+tmp314_;
   double tmp316_ = (tmp315_)*(tmp69_);
   double tmp317_ = (tmp307_)*tmp72_;
   double tmp318_ = tmp316_+tmp317_;
   double tmp319_ = (tmp318_)*(tmp69_);
   double tmp320_ = (tmp307_)*tmp73_;
   double tmp321_ = tmp319_+tmp320_;
   double tmp322_ = -(tmp12_);
   double tmp323_ = tmp171_*tmp9_;
   double tmp324_ = tmp322_*tmp17_;
   double tmp325_ = tmp323_*tmp18_;
   double tmp326_ = tmp324_+tmp325_;
   double tmp327_ = (tmp326_)*(tmp8_);
   double tmp328_ = tmp322_*tmp4_;
   double tmp329_ = tmp323_*tmp19_;
   double tmp330_ = tmp328_+tmp329_;
   double tmp331_ = (tmp330_)*(tmp14_);
   double tmp332_ = tmp327_+tmp331_;
   double tmp333_ = tmp323_*tmp2_;
   double tmp334_ = tmp333_*(tmp16_);
   double tmp335_ = tmp332_+tmp334_;
   double tmp336_ = tmp20_*(tmp335_);
   double tmp337_ = -(tmp336_);
   double tmp338_ = tmp337_/tmp77_;
   double tmp339_ = (tmp338_)*(tmp40_);
   double tmp340_ = tmp339_*mLocFour15x2_State_0_0;
   double tmp341_ = (tmp340_)/tmp79_;
   double tmp342_ = (tmp341_)*(tmp45_);
   double tmp343_ = tmp323_*tmp17_;
   double tmp344_ = tmp12_*tmp18_;
   double tmp345_ = tmp343_+tmp344_;
   double tmp346_ = (tmp345_)*(tmp8_);
   double tmp347_ = tmp323_*tmp4_;
   double tmp348_ = tmp12_*tmp19_;
   double tmp349_ = tmp347_+tmp348_;
   double tmp350_ = (tmp349_)*(tmp14_);
   double tmp351_ = tmp346_+tmp350_;
   double tmp352_ = tmp12_*tmp2_;
   double tmp353_ = tmp352_*(tmp16_);
   double tmp354_ = tmp351_+tmp353_;
   double tmp355_ = (tmp354_)*(tmp33_);
   double tmp356_ = (tmp338_)*(tmp57_);
   double tmp357_ = tmp355_+tmp356_;
   double tmp358_ = (tmp357_)*mLocFour15x2_State_0_0;
   double tmp359_ = (tmp358_)/tmp79_;
   double tmp360_ = (tmp359_)*(tmp62_);
   double tmp361_ = (tmp341_)*(tmp64_);
   double tmp362_ = (tmp359_)*(tmp66_);
   double tmp363_ = tmp361_+tmp361_;
   double tmp364_ = tmp362_+tmp362_;
   double tmp365_ = tmp363_+tmp364_;
   double tmp366_ = (tmp365_)*(tmp69_);
   double tmp367_ = tmp366_+tmp366_;
   double tmp368_ = (tmp367_)*(tmp69_);
   double tmp369_ = (tmp365_)*tmp70_;
   double tmp370_ = tmp368_+tmp369_;
   double tmp371_ = (tmp370_)*(tmp69_);
   double tmp372_ = (tmp365_)*tmp71_;
   double tmp373_ = tmp371_+tmp372_;
   double tmp374_ = (tmp373_)*(tmp69_);
   double tmp375_ = (tmp365_)*tmp72_;
   double tmp376_ = tmp374_+tmp375_;
   double tmp377_ = (tmp376_)*(tmp69_);
   double tmp378_ = (tmp365_)*tmp73_;
   double tmp379_ = tmp377_+tmp378_;
   double tmp380_ = tmp171_*(tmp23_);
   double tmp381_ = tmp20_*tmp380_;
   double tmp382_ = -(tmp381_);
   double tmp383_ = tmp382_/tmp77_;
   double tmp384_ = tmp171_*tmp34_;
   double tmp385_ = tmp384_*(tmp33_);
   double tmp386_ = (tmp383_)*(tmp40_);
   double tmp387_ = tmp385_+tmp386_;
   double tmp388_ = (tmp387_)*mLocFour15x2_State_0_0;
   double tmp389_ = (tmp388_)/tmp79_;
   double tmp390_ = (tmp389_)*(tmp45_);
   double tmp391_ = tmp171_*(tmp48_);
   double tmp392_ = tmp391_*(tmp33_);
   double tmp393_ = (tmp383_)*(tmp57_);
   double tmp394_ = tmp392_+tmp393_;
   double tmp395_ = (tmp394_)*mLocFour15x2_State_0_0;
   double tmp396_ = (tmp395_)/tmp79_;
   double tmp397_ = (tmp396_)*(tmp62_);
   double tmp398_ = (tmp389_)*(tmp64_);
   double tmp399_ = (tmp396_)*(tmp66_);
   double tmp400_ = tmp398_+tmp398_;
   double tmp401_ = tmp399_+tmp399_;
   double tmp402_ = tmp400_+tmp401_;
   double tmp403_ = (tmp402_)*(tmp69_);
   double tmp404_ = tmp403_+tmp403_;
   double tmp405_ = (tmp404_)*(tmp69_);
   double tmp406_ = (tmp402_)*tmp70_;
   double tmp407_ = tmp405_+tmp406_;
   double tmp408_ = (tmp407_)*(tmp69_);
   double tmp409_ = (tmp402_)*tmp71_;
   double tmp410_ = tmp408_+tmp409_;
   double tmp411_ = (tmp410_)*(tmp69_);
   double tmp412_ = (tmp402_)*tmp72_;
   double tmp413_ = tmp411_+tmp412_;
   double tmp414_ = (tmp413_)*(tmp69_);
   double tmp415_ = (tmp402_)*tmp73_;
   double tmp416_ = tmp414_+tmp415_;
   double tmp417_ = tmp171_*(tmp27_);
   double tmp418_ = tmp20_*tmp417_;
   double tmp419_ = -(tmp418_);
   double tmp420_ = tmp419_/tmp77_;
   double tmp421_ = tmp171_*tmp36_;
   double tmp422_ = tmp421_*(tmp33_);
   double tmp423_ = (tmp420_)*(tmp40_);
   double tmp424_ = tmp422_+tmp423_;
   double tmp425_ = (tmp424_)*mLocFour15x2_State_0_0;
   double tmp426_ = (tmp425_)/tmp79_;
   double tmp427_ = (tmp426_)*(tmp45_);
   double tmp428_ = tmp171_*(tmp52_);
   double tmp429_ = tmp428_*(tmp33_);
   double tmp430_ = (tmp420_)*(tmp57_);
   double tmp431_ = tmp429_+tmp430_;
   double tmp432_ = (tmp431_)*mLocFour15x2_State_0_0;
   double tmp433_ = (tmp432_)/tmp79_;
   double tmp434_ = (tmp433_)*(tmp62_);
   double tmp435_ = (tmp426_)*(tmp64_);
   double tmp436_ = (tmp433_)*(tmp66_);
   double tmp437_ = tmp435_+tmp435_;
   double tmp438_ = tmp436_+tmp436_;
   double tmp439_ = tmp437_+tmp438_;
   double tmp440_ = (tmp439_)*(tmp69_);
   double tmp441_ = tmp440_+tmp440_;
   double tmp442_ = (tmp441_)*(tmp69_);
   double tmp443_ = (tmp439_)*tmp70_;
   double tmp444_ = tmp442_+tmp443_;
   double tmp445_ = (tmp444_)*(tmp69_);
   double tmp446_ = (tmp439_)*tmp71_;
   double tmp447_ = tmp445_+tmp446_;
   double tmp448_ = (tmp447_)*(tmp69_);
   double tmp449_ = (tmp439_)*tmp72_;
   double tmp450_ = tmp448_+tmp449_;
   double tmp451_ = (tmp450_)*(tmp69_);
   double tmp452_ = (tmp439_)*tmp73_;
   double tmp453_ = tmp451_+tmp452_;
   double tmp454_ = tmp171_*tmp30_;
   double tmp455_ = tmp20_*tmp454_;
   double tmp456_ = -(tmp455_);
   double tmp457_ = tmp456_/tmp77_;
   double tmp458_ = tmp261_*(tmp33_);
   double tmp459_ = (tmp457_)*(tmp40_);
   double tmp460_ = tmp458_+tmp459_;
   double tmp461_ = (tmp460_)*mLocFour15x2_State_0_0;
   double tmp462_ = (tmp461_)/tmp79_;
   double tmp463_ = (tmp462_)*(tmp45_);
   double tmp464_ = tmp171_*tmp55_;
   double tmp465_ = tmp464_*(tmp33_);
   double tmp466_ = (tmp457_)*(tmp57_);
   double tmp467_ = tmp465_+tmp466_;
   double tmp468_ = (tmp467_)*mLocFour15x2_State_0_0;
   double tmp469_ = (tmp468_)/tmp79_;
   double tmp470_ = (tmp469_)*(tmp62_);
   double tmp471_ = (tmp462_)*(tmp64_);
   double tmp472_ = (tmp469_)*(tmp66_);
   double tmp473_ = tmp471_+tmp471_;
   double tmp474_ = tmp472_+tmp472_;
   double tmp475_ = tmp473_+tmp474_;
   double tmp476_ = (tmp475_)*(tmp69_);
   double tmp477_ = tmp476_+tmp476_;
   double tmp478_ = (tmp477_)*(tmp69_);
   double tmp479_ = (tmp475_)*tmp70_;
   double tmp480_ = tmp478_+tmp479_;
   double tmp481_ = (tmp480_)*(tmp69_);
   double tmp482_ = (tmp475_)*tmp71_;
   double tmp483_ = tmp481_+tmp482_;
   double tmp484_ = (tmp483_)*(tmp69_);
   double tmp485_ = (tmp475_)*tmp72_;
   double tmp486_ = tmp484_+tmp485_;
   double tmp487_ = (tmp486_)*(tmp69_);
   double tmp488_ = (tmp475_)*tmp73_;
   double tmp489_ = tmp487_+tmp488_;
   double tmp490_ = 1-tmp75_;
   double tmp491_ = (tmp83_)*(tmp62_);
   double tmp492_ = (tmp89_)*(tmp45_);
   double tmp493_ = tmp491_+tmp492_;
   double tmp494_ = tmp91_+tmp91_;
   double tmp495_ = tmp90_*2;
   double tmp496_ = tmp84_+tmp84_;
   double tmp497_ = mCompCoord[8];
   double tmp498_ = (tmp118_)*tmp93_;
   double tmp499_ = (tmp120_)*tmp95_;
   double tmp500_ = tmp498_+tmp499_;
   double tmp501_ = (tmp123_)*tmp98_;
   double tmp502_ = tmp500_+tmp501_;
   double tmp503_ = (tmp126_)*tmp101_;
   double tmp504_ = tmp502_+tmp503_;
   double tmp505_ = (tmp129_)*tmp104_;
   double tmp506_ = tmp504_+tmp505_;
   double tmp507_ = (tmp132_)*tmp107_;
   double tmp508_ = tmp506_+tmp507_;
   double tmp509_ = (tmp132_)*(tmp69_);
   double tmp510_ = (tmp118_)*tmp74_;
   double tmp511_ = tmp509_+tmp510_;
   double tmp512_ = (tmp511_)*tmp110_;
   double tmp513_ = tmp508_+tmp512_;
   double tmp514_ = (tmp133_)*tmp80_;
   double tmp515_ = tmp134_+tmp134_;
   double tmp516_ = (tmp136_)*tmp93_;
   double tmp517_ = (tmp138_)*tmp95_;
   double tmp518_ = tmp516_+tmp517_;
   double tmp519_ = (tmp141_)*tmp98_;
   double tmp520_ = tmp518_+tmp519_;
   double tmp521_ = (tmp144_)*tmp101_;
   double tmp522_ = tmp520_+tmp521_;
   double tmp523_ = (tmp147_)*tmp104_;
   double tmp524_ = tmp522_+tmp523_;
   double tmp525_ = (tmp150_)*tmp107_;
   double tmp526_ = tmp524_+tmp525_;
   double tmp527_ = (tmp150_)*(tmp69_);
   double tmp528_ = (tmp136_)*tmp74_;
   double tmp529_ = tmp527_+tmp528_;
   double tmp530_ = (tmp529_)*tmp110_;
   double tmp531_ = tmp526_+tmp530_;
   double tmp532_ = tmp151_+tmp151_;
   double tmp533_ = (tmp133_)*(tmp113_);
   double tmp534_ = (tmp153_)*tmp93_;
   double tmp535_ = (tmp155_)*tmp95_;
   double tmp536_ = tmp534_+tmp535_;
   double tmp537_ = (tmp158_)*tmp98_;
   double tmp538_ = tmp536_+tmp537_;
   double tmp539_ = (tmp161_)*tmp101_;
   double tmp540_ = tmp538_+tmp539_;
   double tmp541_ = (tmp164_)*tmp104_;
   double tmp542_ = tmp540_+tmp541_;
   double tmp543_ = (tmp167_)*tmp107_;
   double tmp544_ = tmp542_+tmp543_;
   double tmp545_ = (tmp167_)*(tmp69_);
   double tmp546_ = (tmp153_)*tmp74_;
   double tmp547_ = tmp545_+tmp546_;
   double tmp548_ = (tmp547_)*tmp110_;
   double tmp549_ = tmp544_+tmp548_;
   double tmp550_ = (tmp45_)*mLocFour15x2_State_0_0;
   double tmp551_ = tmp550_*mLocScNorm;
   double tmp552_ = tmp169_*mLocFour15x2_State_0_0;
   double tmp553_ = tmp552_*mLocScNorm;
   double tmp554_ = (tmp173_)*tmp93_;
   double tmp555_ = (tmp175_)*tmp95_;
   double tmp556_ = tmp554_+tmp555_;
   double tmp557_ = (tmp178_)*tmp98_;
   double tmp558_ = tmp556_+tmp557_;
   double tmp559_ = (tmp181_)*tmp101_;
   double tmp560_ = tmp558_+tmp559_;
   double tmp561_ = (tmp184_)*tmp104_;
   double tmp562_ = tmp560_+tmp561_;
   double tmp563_ = (tmp187_)*tmp107_;
   double tmp564_ = tmp562_+tmp563_;
   double tmp565_ = (tmp187_)*(tmp69_);
   double tmp566_ = (tmp173_)*tmp74_;
   double tmp567_ = tmp565_+tmp566_;
   double tmp568_ = (tmp567_)*tmp110_;
   double tmp569_ = tmp564_+tmp568_;
   double tmp570_ = tmp171_*(tmp113_);
   double tmp571_ = (tmp189_)*tmp93_;
   double tmp572_ = (tmp191_)*tmp95_;
   double tmp573_ = tmp571_+tmp572_;
   double tmp574_ = (tmp194_)*tmp98_;
   double tmp575_ = tmp573_+tmp574_;
   double tmp576_ = (tmp197_)*tmp101_;
   double tmp577_ = tmp575_+tmp576_;
   double tmp578_ = (tmp200_)*tmp104_;
   double tmp579_ = tmp577_+tmp578_;
   double tmp580_ = (tmp203_)*tmp107_;
   double tmp581_ = tmp579_+tmp580_;
   double tmp582_ = (tmp203_)*(tmp69_);
   double tmp583_ = (tmp189_)*tmp74_;
   double tmp584_ = tmp582_+tmp583_;
   double tmp585_ = (tmp584_)*tmp110_;
   double tmp586_ = tmp581_+tmp585_;
   double tmp587_ = (tmp226_)*(tmp62_);
   double tmp588_ = (tmp240_)*(tmp45_);
   double tmp589_ = tmp587_+tmp588_;
   double tmp590_ = tmp241_+tmp241_;
   double tmp591_ = tmp227_+tmp227_;
   double tmp592_ = (tmp246_)*tmp93_;
   double tmp593_ = (tmp248_)*tmp95_;
   double tmp594_ = tmp592_+tmp593_;
   double tmp595_ = (tmp251_)*tmp98_;
   double tmp596_ = tmp594_+tmp595_;
   double tmp597_ = (tmp254_)*tmp101_;
   double tmp598_ = tmp596_+tmp597_;
   double tmp599_ = (tmp257_)*tmp104_;
   double tmp600_ = tmp598_+tmp599_;
   double tmp601_ = (tmp260_)*tmp107_;
   double tmp602_ = tmp600_+tmp601_;
   double tmp603_ = (tmp260_)*(tmp69_);
   double tmp604_ = (tmp246_)*tmp74_;
   double tmp605_ = tmp603_+tmp604_;
   double tmp606_ = (tmp605_)*tmp110_;
   double tmp607_ = tmp602_+tmp606_;
   double tmp608_ = (tmp287_)*(tmp62_);
   double tmp609_ = (tmp301_)*(tmp45_);
   double tmp610_ = tmp608_+tmp609_;
   double tmp611_ = tmp302_+tmp302_;
   double tmp612_ = tmp288_+tmp288_;
   double tmp613_ = (tmp307_)*tmp93_;
   double tmp614_ = (tmp309_)*tmp95_;
   double tmp615_ = tmp613_+tmp614_;
   double tmp616_ = (tmp312_)*tmp98_;
   double tmp617_ = tmp615_+tmp616_;
   double tmp618_ = (tmp315_)*tmp101_;
   double tmp619_ = tmp617_+tmp618_;
   double tmp620_ = (tmp318_)*tmp104_;
   double tmp621_ = tmp619_+tmp620_;
   double tmp622_ = (tmp321_)*tmp107_;
   double tmp623_ = tmp621_+tmp622_;
   double tmp624_ = (tmp321_)*(tmp69_);
   double tmp625_ = (tmp307_)*tmp74_;
   double tmp626_ = tmp624_+tmp625_;
   double tmp627_ = (tmp626_)*tmp110_;
   double tmp628_ = tmp623_+tmp627_;
   double tmp629_ = (tmp341_)*(tmp62_);
   double tmp630_ = (tmp359_)*(tmp45_);
   double tmp631_ = tmp629_+tmp630_;
   double tmp632_ = tmp360_+tmp360_;
   double tmp633_ = tmp342_+tmp342_;
   double tmp634_ = (tmp365_)*tmp93_;
   double tmp635_ = (tmp367_)*tmp95_;
   double tmp636_ = tmp634_+tmp635_;
   double tmp637_ = (tmp370_)*tmp98_;
   double tmp638_ = tmp636_+tmp637_;
   double tmp639_ = (tmp373_)*tmp101_;
   double tmp640_ = tmp638_+tmp639_;
   double tmp641_ = (tmp376_)*tmp104_;
   double tmp642_ = tmp640_+tmp641_;
   double tmp643_ = (tmp379_)*tmp107_;
   double tmp644_ = tmp642_+tmp643_;
   double tmp645_ = (tmp379_)*(tmp69_);
   double tmp646_ = (tmp365_)*tmp74_;
   double tmp647_ = tmp645_+tmp646_;
   double tmp648_ = (tmp647_)*tmp110_;
   double tmp649_ = tmp644_+tmp648_;
   double tmp650_ = (tmp389_)*(tmp62_);
   double tmp651_ = (tmp396_)*(tmp45_);
   double tmp652_ = tmp650_+tmp651_;
   double tmp653_ = tmp397_+tmp397_;
   double tmp654_ = tmp390_+tmp390_;
   double tmp655_ = (tmp402_)*tmp93_;
   double tmp656_ = (tmp404_)*tmp95_;
   double tmp657_ = tmp655_+tmp656_;
   double tmp658_ = (tmp407_)*tmp98_;
   double tmp659_ = tmp657_+tmp658_;
   double tmp660_ = (tmp410_)*tmp101_;
   double tmp661_ = tmp659_+tmp660_;
   double tmp662_ = (tmp413_)*tmp104_;
   double tmp663_ = tmp661_+tmp662_;
   double tmp664_ = (tmp416_)*tmp107_;
   double tmp665_ = tmp663_+tmp664_;
   double tmp666_ = (tmp416_)*(tmp69_);
   double tmp667_ = (tmp402_)*tmp74_;
   double tmp668_ = tmp666_+tmp667_;
   double tmp669_ = (tmp668_)*tmp110_;
   double tmp670_ = tmp665_+tmp669_;
   double tmp671_ = (tmp426_)*(tmp62_);
   double tmp672_ = (tmp433_)*(tmp45_);
   double tmp673_ = tmp671_+tmp672_;
   double tmp674_ = tmp434_+tmp434_;
   double tmp675_ = tmp427_+tmp427_;
   double tmp676_ = (tmp439_)*tmp93_;
   double tmp677_ = (tmp441_)*tmp95_;
   double tmp678_ = tmp676_+tmp677_;
   double tmp679_ = (tmp444_)*tmp98_;
   double tmp680_ = tmp678_+tmp679_;
   double tmp681_ = (tmp447_)*tmp101_;
   double tmp682_ = tmp680_+tmp681_;
   double tmp683_ = (tmp450_)*tmp104_;
   double tmp684_ = tmp682_+tmp683_;
   double tmp685_ = (tmp453_)*tmp107_;
   double tmp686_ = tmp684_+tmp685_;
   double tmp687_ = (tmp453_)*(tmp69_);
   double tmp688_ = (tmp439_)*tmp74_;
   double tmp689_ = tmp687_+tmp688_;
   double tmp690_ = (tmp689_)*tmp110_;
   double tmp691_ = tmp686_+tmp690_;
   double tmp692_ = (tmp462_)*(tmp62_);
   double tmp693_ = (tmp469_)*(tmp45_);
   double tmp694_ = tmp692_+tmp693_;
   double tmp695_ = tmp470_+tmp470_;
   double tmp696_ = tmp463_+tmp463_;
   double tmp697_ = (tmp475_)*tmp93_;
   double tmp698_ = (tmp477_)*tmp95_;
   double tmp699_ = tmp697_+tmp698_;
   double tmp700_ = (tmp480_)*tmp98_;
   double tmp701_ = tmp699_+tmp700_;
   double tmp702_ = (tmp483_)*tmp101_;
   double tmp703_ = tmp701_+tmp702_;
   double tmp704_ = (tmp486_)*tmp104_;
   double tmp705_ = tmp703_+tmp704_;
   double tmp706_ = (tmp489_)*tmp107_;
   double tmp707_ = tmp705_+tmp706_;
   double tmp708_ = (tmp489_)*(tmp69_);
   double tmp709_ = (tmp475_)*tmp74_;
   double tmp710_ = tmp708_+tmp709_;
   double tmp711_ = (tmp710_)*tmp110_;
   double tmp712_ = tmp707_+tmp711_;

  mVal[0] = ((mLocFour15x2_State_1_0+(((tmp76_)*(tmp45_)+tmp80_*(tmp62_))-tmp86_*tmp168_+tmp90_*tmp169_+tmp92_*tmp170_+(tmp64_)*(tmp113_))*mLocFour15x2_State_0_0)-mLocXIm)*mLocScNorm;

  mCompDer[0][0] = (((tmp83_)*(tmp76_)+(tmp89_)*tmp80_)-(tmp496_)*tmp86_+(tmp493_)*tmp90_+(tmp494_)*tmp92_+(tmp83_)*(tmp113_)+(tmp513_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][1] = ((tmp133_)*(tmp76_)-(tmp515_)*tmp86_+tmp151_*tmp90_+tmp533_+(tmp531_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][2] = (tmp514_+tmp134_*tmp90_+(tmp532_)*tmp92_+(tmp549_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][3] = tmp551_;
  mCompDer[0][4] = (tmp62_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][5] = -(2*tmp168_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][6] = tmp553_;
  mCompDer[0][7] = tmp170_*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][8] = 0;
  mCompDer[0][9] = (tmp570_+(tmp569_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][10] = (tmp586_)*(tmp64_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][11] = (tmp69_)*(tmp64_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][12] = tmp70_*(tmp64_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][13] = tmp71_*(tmp64_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][14] = tmp72_*(tmp64_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][15] = tmp73_*(tmp64_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][16] = tmp74_*(tmp64_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][17] = tmp111_*(tmp64_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][18] = (((tmp226_)*(tmp76_)+(tmp240_)*tmp80_)-(tmp591_)*tmp86_+(tmp589_)*tmp90_+(tmp590_)*tmp92_+(tmp226_)*(tmp113_)+(tmp607_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][19] = (((tmp287_)*(tmp76_)+(tmp301_)*tmp80_)-(tmp612_)*tmp86_+(tmp610_)*tmp90_+(tmp611_)*tmp92_+(tmp287_)*(tmp113_)+(tmp628_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][20] = (((tmp341_)*(tmp76_)+(tmp359_)*tmp80_)-(tmp633_)*tmp86_+(tmp631_)*tmp90_+(tmp632_)*tmp92_+(tmp341_)*(tmp113_)+(tmp649_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][21] = (((tmp389_)*(tmp76_)+(tmp396_)*tmp80_)-(tmp654_)*tmp86_+(tmp652_)*tmp90_+(tmp653_)*tmp92_+(tmp389_)*(tmp113_)+(tmp670_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][22] = (((tmp426_)*(tmp76_)+(tmp433_)*tmp80_)-(tmp675_)*tmp86_+(tmp673_)*tmp90_+(tmp674_)*tmp92_+(tmp426_)*(tmp113_)+(tmp691_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[0][23] = (((tmp462_)*(tmp76_)+(tmp469_)*tmp80_)-(tmp696_)*tmp86_+(tmp694_)*tmp90_+(tmp695_)*tmp92_+(tmp462_)*(tmp113_)+(tmp712_)*(tmp64_))*mLocFour15x2_State_0_0*mLocScNorm;
  mVal[1] = ((mLocFour15x2_State_2_0+(((tmp490_)*(tmp62_)+tmp80_*(tmp45_)+tmp85_*tmp169_)-tmp495_*tmp170_+tmp497_*tmp168_+(tmp66_)*(tmp113_))*mLocFour15x2_State_0_0)-mLocYIm)*mLocScNorm;

  mCompDer[1][0] = (((tmp89_)*(tmp490_)+(tmp83_)*tmp80_+(tmp493_)*tmp85_)-(tmp494_)*tmp495_+(tmp496_)*tmp497_+(tmp89_)*(tmp113_)+(tmp513_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][1] = (tmp514_+tmp151_*tmp85_+(tmp515_)*tmp497_+(tmp531_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][2] = (((tmp133_)*(tmp490_)+tmp134_*tmp85_)-(tmp532_)*tmp495_+tmp533_+(tmp549_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][3] = tmp171_*(tmp62_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][4] = tmp551_;
  mCompDer[1][5] = tmp553_;
  mCompDer[1][6] = -(2*tmp170_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = tmp168_*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][9] = (tmp569_)*(tmp66_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][10] = (tmp570_+(tmp586_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][11] = (tmp69_)*(tmp66_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][12] = tmp70_*(tmp66_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][13] = tmp71_*(tmp66_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][14] = tmp72_*(tmp66_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][15] = tmp73_*(tmp66_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][16] = tmp74_*(tmp66_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][17] = tmp111_*(tmp66_)*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][18] = (((tmp240_)*(tmp490_)+(tmp226_)*tmp80_+(tmp589_)*tmp85_)-(tmp590_)*tmp495_+(tmp591_)*tmp497_+(tmp240_)*(tmp113_)+(tmp607_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][19] = (((tmp301_)*(tmp490_)+(tmp287_)*tmp80_+(tmp610_)*tmp85_)-(tmp611_)*tmp495_+(tmp612_)*tmp497_+(tmp301_)*(tmp113_)+(tmp628_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][20] = (((tmp359_)*(tmp490_)+(tmp341_)*tmp80_+(tmp631_)*tmp85_)-(tmp632_)*tmp495_+(tmp633_)*tmp497_+(tmp359_)*(tmp113_)+(tmp649_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][21] = (((tmp396_)*(tmp490_)+(tmp389_)*tmp80_+(tmp652_)*tmp85_)-(tmp653_)*tmp495_+(tmp654_)*tmp497_+(tmp396_)*(tmp113_)+(tmp670_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][22] = (((tmp433_)*(tmp490_)+(tmp426_)*tmp80_+(tmp673_)*tmp85_)-(tmp674_)*tmp495_+(tmp675_)*tmp497_+(tmp433_)*(tmp113_)+(tmp691_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
  mCompDer[1][23] = (((tmp469_)*(tmp490_)+(tmp462_)*tmp80_+(tmp694_)*tmp85_)-(tmp695_)*tmp495_+(tmp696_)*tmp497_+(tmp469_)*(tmp113_)+(tmp712_)*(tmp66_))*mLocFour15x2_State_0_0*mLocScNorm;
}


void cEqAppui_TerFix_M2CFour15x2::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_TerFix_M2CFour15x2 Has no Der Sec");
}

void cEqAppui_TerFix_M2CFour15x2::SetFour15x2_State_0_0(double aVal){ mLocFour15x2_State_0_0 = aVal;}
void cEqAppui_TerFix_M2CFour15x2::SetFour15x2_State_1_0(double aVal){ mLocFour15x2_State_1_0 = aVal;}
void cEqAppui_TerFix_M2CFour15x2::SetFour15x2_State_2_0(double aVal){ mLocFour15x2_State_2_0 = aVal;}
void cEqAppui_TerFix_M2CFour15x2::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_TerFix_M2CFour15x2::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_TerFix_M2CFour15x2::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_TerFix_M2CFour15x2::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppui_TerFix_M2CFour15x2::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_TerFix_M2CFour15x2::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_TerFix_M2CFour15x2::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Four15x2_State_0_0") return & mLocFour15x2_State_0_0;
   if (aName == "Four15x2_State_1_0") return & mLocFour15x2_State_1_0;
   if (aName == "Four15x2_State_2_0") return & mLocFour15x2_State_2_0;
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_TerFix_M2CFour15x2::mTheAuto("cEqAppui_TerFix_M2CFour15x2",cEqAppui_TerFix_M2CFour15x2::Alloc);


cElCompiledFonc *  cEqAppui_TerFix_M2CFour15x2::Alloc()
{  return new cEqAppui_TerFix_M2CFour15x2();
}

