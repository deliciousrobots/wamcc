/****************************************************************************
Prolog to Wam Compiler                     INRIA Rocquencourt - ChLoE Project
Version 2.2                                                Daniel Diaz - 1994

file : wamcc4.h
****************************************************************************/

#define NB_OF_PRIVATE_PREDS    46

static char    *module_name="wamcc4";
static int      module_nb;

static AtomInf *X5B5D;
static AtomInf *X67656E65726174696F6E5F636F6465;
static AtomInf *X6465627567;
static AtomInf *X67656E65726174696F6E5F636F64655F2461757831;
static AtomInf *X6462675F636C61757365;
static AtomInf *X6462675F626F6479;
static AtomInf *X67656E6572655F74657465;
static AtomInf *X70;
static AtomInf *X67656E6572655F746574655F2461757832;
static AtomInf *X616C6C6F63617465;
static AtomInf *X67656E5F746574655F6C73745F617267;
static AtomInf *X67656E6572655F636F727073;
static AtomInf *X70726F63656564;
static AtomInf *X2F;
static AtomInf *X6661696C;
static AtomInf *X66616C7365;
static AtomInf *X67656E6572655F636F7270735F2461757833;
static AtomInf *X67656E6572655F636F7270735F2461757834;
static AtomInf *X6465616C6C6F63617465;
static AtomInf *X67656E6572655F636F7270735F2461757835;
static AtomInf *X63616C6C;
static AtomInf *X67656E6572655F636F7270735F2461757836;
static AtomInf *X65786563757465;
static AtomInf *X67656E5F636F7270735F6C73745F617267;
static AtomInf *X67656E5F756E69665F617267;
static AtomInf *X766172;
static AtomInf *X696776;
static AtomInf *X78;
static AtomInf *X79;
static AtomInf *X637374;
static AtomInf *X6765745F636F6E7374616E74;
static AtomInf *X696E74;
static AtomInf *X6765745F696E7465676572;
static AtomInf *X6E696C;
static AtomInf *X6765745F6E696C;
static AtomInf *X756E6966;
static AtomInf *X67656E5F756E69665F6172675F2461757837;
static AtomInf *X74;
static AtomInf *X6765745F785F7661726961626C65;
static AtomInf *X6765745F785F76616C7565;
static AtomInf *X67656E5F756E69665F6172675F2461757838;
static AtomInf *X6765745F795F7661726961626C65;
static AtomInf *X6765745F795F76616C7565;
static AtomInf *X67656E5F6C6F61645F617267;
static AtomInf *X7075745F636F6E7374616E74;
static AtomInf *X7075745F696E7465676572;
static AtomInf *X7075745F6E696C;
static AtomInf *X6C6F6164;
static AtomInf *X67656E5F6C6F61645F6172675F2461757839;
static AtomInf *X7075745F785F7661726961626C65;
static AtomInf *X7075745F785F76616C7565;
static AtomInf *X67656E5F6C6F61645F6172675F246175783130;
static AtomInf *X7075745F795F7661726961626C65;
static AtomInf *X7075745F795F756E736166655F76616C7565;
static AtomInf *X7075745F795F76616C7565;
static AtomInf *X67656E5F6C73745F73747263;
static AtomInf *X67656E5F6C73745F737472635F246175783131;
static AtomInf *X67656E5F73747263;
static AtomInf *X6C7374;
static AtomInf *X737463;
static AtomInf *X67656E5F737472635F246175783132;
static AtomInf *X6765745F6C697374;
static AtomInf *X7075745F6C697374;
static AtomInf *X67656E5F737472635F246175783133;
static AtomInf *X6765745F737472756374757265;
static AtomInf *X7075745F737472756374757265;
static AtomInf *X67656E5F756E6966795F6C73745F617267;
static AtomInf *X67656E5F756E6966795F6C73745F6172675F246175783134;
static AtomInf *X756E6966795F766F6964;
static AtomInf *X67656E5F636F6D7074655F766F6964;
static AtomInf *X67656E5F756E6966795F617267;
static AtomInf *X756E6966795F636F6E7374616E74;
static AtomInf *X756E6966795F696E7465676572;
static AtomInf *X756E6966795F6E696C;
static AtomInf *X67656E5F756E6966795F6172675F246175783135;
static AtomInf *X756E6966795F785F7661726961626C65;
static AtomInf *X66;
static AtomInf *X756E6966795F785F6C6F63616C5F76616C7565;
static AtomInf *X756E6966795F785F76616C7565;
static AtomInf *X67656E5F756E6966795F6172675F246175783136;
static AtomInf *X756E6966795F795F7661726961626C65;
static AtomInf *X756E6966795F795F6C6F63616C5F76616C7565;
static AtomInf *X756E6966795F795F76616C7565;
static AtomInf *X67656E5F756E6966795F6172675F246175783137;
static AtomInf *X67656E5F696E6C696E655F70726564;
static AtomInf *X246765745F62635F726567;
static AtomInf *X24637574;
static AtomInf *X246462675F74727565;
static AtomInf *X707261676D615F63;
static AtomInf *X63616C6C696E675F6D6F64756C655F6E62;
static AtomInf *X3D;
static AtomInf *X434D4E;
static AtomInf *X6275696C74696E5F31;
static AtomInf *X6275696C74696E5F33;
static AtomInf *X6275696C74696E5F32;
static AtomInf *X6973;
static AtomInf *X67656E5F696E6C696E655F707265645F246175783139;
static AtomInf *X6765745F785F62635F726567;
static AtomInf *X6765745F795F62635F726567;
static AtomInf *X67656E5F696E6C696E655F707265645F246175783138;
static AtomInf *X246765745F62635F7265672075736564207769746820626F756E64207661726961626C652E2E2E;
static AtomInf *X67656E5F696E6C696E655F707265645F246175783230;
static AtomInf *X6375745F78;
static AtomInf *X6375745F79;
static AtomInf *X67656E5F696E6C696E655F707265645F246175783231;
static AtomInf *X696E6C696E655F756E69665F7265675F7465726D65;
static AtomInf *X747970655F746573745F66756E63746F72;
static AtomInf *X6E6F6E766172;
static AtomInf *X61746F6D;
static AtomInf *X696E7465676572;
static AtomInf *X6E756D626572;
static AtomInf *X61746F6D6963;
static AtomInf *X636F6D706F756E64;
static AtomInf *X63616C6C61626C65;
static AtomInf *X7465726D5F6F70655F66756E63746F72;
static AtomInf *X617267;
static AtomInf *X66756E63746F72;
static AtomInf *X636F6D70617265;
static AtomInf *X7465726D5F636D705F66756E63746F725F6E616D65;
static AtomInf *X3D2E2E;
static AtomInf *X7465726D5F756E6976;
static AtomInf *X3D3D;
static AtomInf *X7465726D5F6571;
static AtomInf *X5C3D3D;
static AtomInf *X7465726D5F6E6571;
static AtomInf *X403C;
static AtomInf *X7465726D5F6C74;
static AtomInf *X403D3C;
static AtomInf *X7465726D5F6C7465;
static AtomInf *X403E;
static AtomInf *X7465726D5F6774;
static AtomInf *X403E3D;
static AtomInf *X7465726D5F677465;
static AtomInf *X696E6C696E655F6C6F61645F6D6174685F65787072;
static AtomInf *X496C6C6567616C2061726974686D657469632065787072657373696F6E;
static AtomInf *X696E6C696E655F6C6F61645F6D6174685F657870725F246175783232;
static AtomInf *X6D6174685F6C6F61645F785F76616C7565;
static AtomInf *X6D6174685F6C6F61645F795F76616C7565;
static AtomInf *X696E6C696E655F6C6F61645F6D6174685F657870725F246175783234;
static AtomInf *X616464;
static AtomInf *X66756E6374696F6E5F31;
static AtomInf *X696E6C696E655F6C6F61645F6D6174685F657870725F246175783233;
static AtomInf *X2D;
static AtomInf *X6E6567;
static AtomInf *X696E6C696E655F6C6F61645F6D6174685F657870725F246175783235;
static AtomInf *X66756E6374696F6E5F32;
static AtomInf *X696E6C696E655F6C6F61645F6D6174685F657870725F246175783236;
static AtomInf *X696E63;
static AtomInf *X737562;
static AtomInf *X646563;
static AtomInf *X6D6174685F6578705F66756E63746F725F6E616D65;
static AtomInf *X2B;
static AtomInf *X2A;
static AtomInf *X6D756C;
static AtomInf *X2F2F;
static AtomInf *X646976;
static AtomInf *X6D6F64;
static AtomInf *X2F5C;
static AtomInf *X616E64;
static AtomInf *X5C2F;
static AtomInf *X6F72;
static AtomInf *X5E;
static AtomInf *X786F72;
static AtomInf *X5C;
static AtomInf *X6E6F74;
static AtomInf *X3C3C;
static AtomInf *X73686C;
static AtomInf *X3E3E;
static AtomInf *X736872;
static AtomInf *X6D6174685F636D705F66756E63746F725F6E616D65;
static AtomInf *X3D3A3D;
static AtomInf *X6571;
static AtomInf *X3D5C3D;
static AtomInf *X6E6571;
static AtomInf *X3C;
static AtomInf *X6C74;
static AtomInf *X3D3C;
static AtomInf *X6C7465;
static AtomInf *X3E;
static AtomInf *X6774;
static AtomInf *X3E3D;
static AtomInf *X677465;
static AtomInf *X675F7661725F66756E63746F72;
static AtomInf *X675F61737369676E;
static AtomInf *X675F61737369676E62;
static AtomInf *X675F6C696E6B;
static AtomInf *X675F72656164;
static AtomInf *X675F61727261795F73697A65;

static SwtTbl   Swt_Table_Name(X67656E5F756E69665F617267,4,1,stc);
static SwtTbl   Swt_Table_Name(X67656E5F6C6F61645F617267,5,1,stc);
static SwtTbl   Swt_Table_Name(X67656E5F73747263,6,1,stc);
static SwtTbl   Swt_Table_Name(X67656E5F756E6966795F617267,6,1,stc);
static SwtTbl   Swt_Table_Name(X67656E5F696E6C696E655F70726564,6,1,cst);
static SwtTbl   Swt_Table_Name(X747970655F746573745F66756E63746F72,1,1,cst);
static SwtTbl   Swt_Table_Name(X7465726D5F6F70655F66756E63746F72,1,1,cst);
static SwtTbl   Swt_Table_Name(X7465726D5F636D705F66756E63746F725F6E616D65,2,1,cst);
static SwtTbl   Swt_Table_Name(X696E6C696E655F6C6F61645F6D6174685F65787072,4,1,stc);
static SwtTbl   Swt_Table_Name(X6D6174685F6578705F66756E63746F725F6E616D65,2,1,cst);
static SwtTbl   Swt_Table_Name(X6D6174685F636D705F66756E63746F725F6E616D65,2,1,cst);
static SwtTbl   Swt_Table_Name(X675F7661725F66756E63746F72,1,1,cst);

