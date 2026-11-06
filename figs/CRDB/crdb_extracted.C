#ifdef __CLING__
#pragma cling optimize(0)
#endif
void crdb_extracted()
{
//=========Macro generated from canvas: crdb_extracted/crdb_extracted
//=========  (Fri Aug 22 13:52:01 2025) by ROOT version 6.28/08
   TCanvas *crdb_extracted = new TCanvas("crdb_extracted", "crdb_extracted",0,0,750,400);
   crdb_extracted->SetHighLightColor(0);
   crdb_extracted->Range(0,0,1,1);
   crdb_extracted->SetFillColor(0);
   crdb_extracted->SetBorderMode(0);
   crdb_extracted->SetBorderSize(0);
   crdb_extracted->SetTickx(1);
   crdb_extracted->SetTicky(1);
   crdb_extracted->SetLeftMargin(0.01);
   crdb_extracted->SetRightMargin(0.01);
   crdb_extracted->SetTopMargin(0.01);
   crdb_extracted->SetBottomMargin(0.01);
   crdb_extracted->SetFrameLineColor(0);
   crdb_extracted->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: data_pad
   TPad *data_pad = new TPad("data_pad", "data_pad",0.005,0.005,0.7025,0.995);
   data_pad->Draw();
   data_pad->cd();
   data_pad->Range(-4.022931,-17.29271,6.628766,6.37106);
   data_pad->SetFillColor(0);
   data_pad->SetBorderMode(0);
   data_pad->SetBorderSize(0);
   data_pad->SetLogx();
   data_pad->SetLogy();
   data_pad->SetTickx(1);
   data_pad->SetTicky(1);
   data_pad->SetLeftMargin(0.12);
   data_pad->SetRightMargin(0.01);
   data_pad->SetTopMargin(0.05);
   data_pad->SetBottomMargin(0.13);
   data_pad->SetFrameLineColor(0);
   data_pad->SetFrameBorderMode(0);
   data_pad->SetFrameLineColor(0);
   data_pad->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle(";E_{k/n} [GeV];^{}H  [GeV m^{2} s sr]^{-1}");
   
   Double_t gr_exp1_errtot_fx3001[28] = { 0.369324, 0.261151, 179.549, 146.233, 119.398, 97.3776, 79.2319, 64.5081, 52.4677, 42.6183, 34.6133, 28.0956, 22.7739, 18.3916, 14.8138, 9.59271, 11.9294,
   0.522303, 0.725948, 0.988686, 1.33079, 1.76375, 2.30052, 2.97584, 3.81678, 4.8466, 6.11449, 7.68088 };
   Double_t gr_exp1_errtot_fy3001[28] = { 1560, 1540, 0.00939, 0.0164, 0.029, 0.0494, 0.0862, 0.154, 0.284, 0.496, 0.856, 1.48, 2.66, 4.49, 7.86, 22.6, 13.5,
   1430, 1200, 966, 738, 533, 372, 247, 161, 101, 63, 37.8 };
   Double_t gr_exp1_errtot_felx3001[28] = { 0.059324, 0.041151, 17.549, 14.233, 11.398, 9.5776, 7.7319, 6.3081, 5.1677, 4.2183, 3.4133, 2.7956, 2.2739, 1.8916, 1.5138, 0.99271, 1.2294,
   0.082303, 0.105948, 0.138686, 0.18079, 0.22375, 0.28052, 0.35584, 0.43678, 0.5366, 0.66449, 0.82088 };
   Double_t gr_exp1_errtot_fely3001[28] = { 72.87667, 75.48509, 0.001106568, 0.001141666, 0.001785609, 0.002546788, 0.004492218, 0.008038039, 0.01480334, 0.02493849, 0.04295345, 0.07337719, 0.1266527, 0.2134966, 0.3645942, 1.03451, 0.6247371,
   70.92821, 56.20896, 44.68391, 33.72317, 24.12466, 16.82673, 11.28765, 7.343628, 4.592127, 2.829718, 1.677964 };
   Double_t gr_exp1_errtot_fehx3001[28] = { 0.070676, 0.048849, 19.451, 15.767, 12.602, 10.6224, 8.5681, 6.9919, 5.7323, 4.6817, 3.7867, 3.1044, 2.5261, 2.1084, 1.6862, 1.10729, 1.3706,
   0.097697, 0.124052, 0.161314, 0.20921, 0.25625, 0.31948, 0.40416, 0.49322, 0.6034, 0.74551, 0.91912 };
   Double_t gr_exp1_errtot_fehy3001[28] = { 72.87667, 75.48509, 0.001106568, 0.001141666, 0.001785609, 0.002546788, 0.004492218, 0.008038039, 0.01480334, 0.02493849, 0.04295345, 0.07337719, 0.1266527, 0.2134966, 0.3645942, 1.03451, 0.6247371,
   70.92821, 56.20896, 44.68391, 33.72317, 24.12466, 16.82673, 11.28765, 7.343628, 4.592127, 2.829718, 1.677964 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(28,gr_exp1_errtot_fx3001,gr_exp1_errtot_fy3001,gr_exp1_errtot_felx3001,gr_exp1_errtot_fehx3001,gr_exp1_errtot_fely3001,gr_exp1_errtot_fehy3001);
   grae->SetName("gr_exp1_errtot");
   grae->SetTitle("AMS01 (1998/06)");
   grae->SetFillStyle(0);
   grae->SetMarkerStyle(2);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp1_errtot3001 = new TH1F("Graph_gr_exp1_errtot3001","AMS01 (1998/06)",100,0.198,218.878);
   Graph_gr_exp1_errtot3001->SetMinimum(0.007455089);
   Graph_gr_exp1_errtot3001->SetMaximum(1796.164);
   Graph_gr_exp1_errtot3001->SetDirectory(nullptr);
   Graph_gr_exp1_errtot3001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_exp1_errtot3001->SetLineColor(ci);
   Graph_gr_exp1_errtot3001->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp1_errtot3001->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp1_errtot3001->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp1_errtot3001->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp1_errtot3001->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp1_errtot3001->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp1_errtot3001->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp1_errtot3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp1_errtot3001);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp2_errtot_fx3002[14] = { 0.21, 6.49, 4.87, 8.66, 3.65, 2.74, 2.05, 1.54, 1.15, 0.87, 0.65, 0.49, 0.37, 0.27 };
   Double_t gr_exp2_errtot_fy3002[14] = { 1050, 50.6, 87.1, 27.8, 156, 248, 381, 541, 732, 921, 1110, 1250, 1330, 1270 };
   Double_t gr_exp2_errtot_felx3002[14] = { 0.03, 0.87, 0.65, 1.16, 0.49, 0.37, 0.27, 0.21, 0.15, 0.12, 0.09, 0.07, 0.05, 0.03 };
   Double_t gr_exp2_errtot_fely3002[14] = { 152.9706, 1.878829, 3.231099, 1.029563, 5.385165, 9.486833, 13.60147, 19.64688, 26.92582, 34.20526, 41.23106, 50.9902, 63.24555, 92.19544 };
   Double_t gr_exp2_errtot_fehx3002[14] = { 0.03, 1.01, 0.75, 1.34, 0.57, 0.42, 0.32, 0.24, 0.18, 0.13, 0.1, 0.07, 0.05, 0.05 };
   Double_t gr_exp2_errtot_fehy3002[14] = { 152.9706, 1.878829, 3.231099, 1.029563, 5.385165, 9.486833, 13.60147, 19.64688, 26.92582, 34.20526, 41.23106, 50.9902, 63.24555, 92.19544 };
   grae = new TGraphAsymmErrors(14,gr_exp2_errtot_fx3002,gr_exp2_errtot_fy3002,gr_exp2_errtot_felx3002,gr_exp2_errtot_fehx3002,gr_exp2_errtot_fely3002,gr_exp2_errtot_fehy3002);
   grae->SetName("gr_exp2_errtot");
   grae->SetTitle("BESS (1993/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(5);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp2_errtot3002 = new TH1F("Graph_gr_exp2_errtot3002","BESS (1993/07)",100,0.162,10.982);
   Graph_gr_exp2_errtot3002->SetMinimum(24.09339);
   Graph_gr_exp2_errtot3002->SetMaximum(1529.893);
   Graph_gr_exp2_errtot3002->SetDirectory(nullptr);
   Graph_gr_exp2_errtot3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp2_errtot3002->SetLineColor(ci);
   Graph_gr_exp2_errtot3002->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp2_errtot3002->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp2_errtot3002->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp2_errtot3002->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp2_errtot3002->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp2_errtot3002->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp2_errtot3002->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp2_errtot3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp2_errtot3002);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp3_errtot_fx3003[14] = { 0.271, 0.199, 8.533, 6.396, 4.894, 3.664, 2.785, 2.05, 1.516, 1.138, 0.854, 0.638, 0.481, 0.36 };
   Double_t gr_exp3_errtot_fy3003[14] = { 1574, 1510, 23.27, 46.38, 80.39, 142.3, 214.5, 358.2, 537, 742.8, 958, 1235, 1439, 1588 };
   Double_t gr_exp3_errtot_felx3003[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp3_errtot_fely3003[14] = { 104, 66.4, 2.36, 4.71, 8.16, 12.7, 15.6, 25.9, 38.8, 53.7, 80.6, 89.4, 87.7, 105 };
   Double_t gr_exp3_errtot_fehx3003[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp3_errtot_fehy3003[14] = { 104, 66.4, 2.36, 4.71, 8.16, 12.7, 15.6, 25.9, 38.8, 53.7, 80.6, 89.4, 87.7, 105 };
   grae = new TGraphAsymmErrors(14,gr_exp3_errtot_fx3003,gr_exp3_errtot_fy3003,gr_exp3_errtot_felx3003,gr_exp3_errtot_fehx3003,gr_exp3_errtot_fely3003,gr_exp3_errtot_fehy3003);
   grae->SetName("gr_exp3_errtot");
   grae->SetTitle("BESS (1994/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp3_errtot3003 = new TH1F("Graph_gr_exp3_errtot3003","BESS (1994/07)",100,0.1791,9.3664);
   Graph_gr_exp3_errtot3003->SetMinimum(18.819);
   Graph_gr_exp3_errtot3003->SetMaximum(1860.209);
   Graph_gr_exp3_errtot3003->SetDirectory(nullptr);
   Graph_gr_exp3_errtot3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp3_errtot3003->SetLineColor(ci);
   Graph_gr_exp3_errtot3003->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp3_errtot3003->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp3_errtot3003->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp3_errtot3003->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp3_errtot3003->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp3_errtot3003->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp3_errtot3003->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp3_errtot3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp3_errtot3003);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp4_errtot_fx3004[14] = { 0.201, 2.032, 0.269, 0.359, 0.476, 0.639, 0.851, 1.129, 2.703, 3.612, 4.877, 6.406, 8.5, 1.527 };
   Double_t gr_exp4_errtot_fy3004[14] = { 1873, 458.6, 1972, 1990, 1852, 1582, 1213, 961.4, 291.5, 174.6, 99.66, 54.5, 27.49, 676.6 };
   Double_t gr_exp4_errtot_felx3004[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp4_errtot_fely3004[14] = { 114, 41.1, 165, 167, 166, 114, 116, 75, 29.5, 12.6, 10.7, 2.99, 2.95, 52.8 };
   Double_t gr_exp4_errtot_fehx3004[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp4_errtot_fehy3004[14] = { 114, 41.1, 165, 167, 166, 114, 116, 75, 29.5, 12.6, 10.7, 2.99, 2.95, 52.8 };
   grae = new TGraphAsymmErrors(14,gr_exp4_errtot_fx3004,gr_exp4_errtot_fy3004,gr_exp4_errtot_felx3004,gr_exp4_errtot_fehx3004,gr_exp4_errtot_fely3004,gr_exp4_errtot_fehy3004);
   grae->SetName("gr_exp4_errtot");
   grae->SetTitle("BESS (1995/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp4_errtot3004 = new TH1F("Graph_gr_exp4_errtot3004","BESS (1995/07)",100,0.1809,9.3299);
   Graph_gr_exp4_errtot3004->SetMinimum(22.086);
   Graph_gr_exp4_errtot3004->SetMaximum(2370.246);
   Graph_gr_exp4_errtot3004->SetDirectory(nullptr);
   Graph_gr_exp4_errtot3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp4_errtot3004->SetLineColor(ci);
   Graph_gr_exp4_errtot3004->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp4_errtot3004->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp4_errtot3004->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp4_errtot3004->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp4_errtot3004->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp4_errtot3004->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp4_errtot3004->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp4_errtot3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp4_errtot3004);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp5_errtot_fx3005[30] = { 4.29735, 2.32304, 19.9437, 17.0968, 14.6588, 10.8167, 9.26283, 7.94662, 6.81481, 5.8427, 5.01023, 3.68939, 3.16553, 2.71188, 12.6143, 0.232304, 0.271188,
   0.316553, 0.368939, 0.429735, 0.501023, 0.58427, 0.681481, 0.794662, 0.926283, 1.08167, 1.26143, 1.46588, 1.70968, 1.99437 };
   Double_t gr_exp5_errtot_fy3005[30] = { 139, 403, 3.68, 5.71, 8.63, 18.6, 27.3, 36.5, 53.3, 75.4, 100, 183, 239, 314, 12.5, 1830, 1910,
   1920, 1920, 1840, 1750, 1660, 1490, 1370, 1200, 1070, 893, 749, 609, 501 };
   Double_t gr_exp5_errtot_felx3005[30] = { 0.31735, 0.17304, 1.4437, 1.2968, 1.0588, 0.8167, 0.68283, 0.58662, 0.50481, 0.4327, 0.37023, 0.26939, 0.23553, 0.20188, 0.9143, 0.017304, 0.020188,
   0.023553, 0.026939, 0.031735, 0.037023, 0.04327, 0.050481, 0.058662, 0.068283, 0.08167, 0.09143, 0.10588, 0.12968, 0.14437 };
   Double_t gr_exp5_errtot_fely3005[30] = { 7.28011, 20.39608, 0.2765863, 0.3959798, 0.5597321, 1.081665, 1.526434, 2.059126, 2.906888, 3.860052, 5.09902, 9.219544, 12.36932, 16.27882, 0.781025, 133.4166, 131.5295,
   121.6553, 121.6553, 111.8034, 101.9804, 92.19544, 80.62258, 70.71068, 60.82763, 60.82763, 46.69047, 38.63936, 31.57531, 25.4951 };
   Double_t gr_exp5_errtot_fehx3005[30] = { 0.34265, 0.18696, 1.5563, 1.4032, 1.1412, 0.8833, 0.73717, 0.63338, 0.54519, 0.4673, 0.39977, 0.29061, 0.25447, 0.21812, 0.9857, 0.018696, 0.021812,
   0.025447, 0.029061, 0.034265, 0.039977, 0.04673, 0.054519, 0.063338, 0.073717, 0.08833, 0.09857, 0.11412, 0.14032, 0.15563 };
   Double_t gr_exp5_errtot_fehy3005[30] = { 7.28011, 20.39608, 0.2765863, 0.3959798, 0.5597321, 1.081665, 1.526434, 2.059126, 2.906888, 3.860052, 5.09902, 9.219544, 12.36932, 16.27882, 0.781025, 133.4166, 131.5295,
   121.6553, 121.6553, 111.8034, 101.9804, 92.19544, 80.62258, 70.71068, 60.82763, 60.82763, 46.69047, 38.63936, 31.57531, 25.4951 };
   grae = new TGraphAsymmErrors(30,gr_exp5_errtot_fx3005,gr_exp5_errtot_fy3005,gr_exp5_errtot_felx3005,gr_exp5_errtot_fehx3005,gr_exp5_errtot_fely3005,gr_exp5_errtot_fehy3005);
   grae->SetName("gr_exp5_errtot");
   grae->SetTitle("BESS (1997/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(26);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp5_errtot3005 = new TH1F("Graph_gr_exp5_errtot3005","BESS (1997/07)",100,0.1935,23.6285);
   Graph_gr_exp5_errtot3005->SetMinimum(3.063072);
   Graph_gr_exp5_errtot3005->SetMaximum(2245.48);
   Graph_gr_exp5_errtot3005->SetDirectory(nullptr);
   Graph_gr_exp5_errtot3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp5_errtot3005->SetLineColor(ci);
   Graph_gr_exp5_errtot3005->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp5_errtot3005->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp5_errtot3005->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp5_errtot3005->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp5_errtot3005->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp5_errtot3005->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp5_errtot3005->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp5_errtot3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp5_errtot3005);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp6_errtot_fx3006[41] = { 27.1, 5.8427, 6.81481, 7.94662, 9.26283, 10.8167, 12.6143, 14.6588, 17.0968, 19.9437, 23.2, 0.232304, 31.5, 36.8, 42.9, 50, 58.3,
   67.9, 79.3, 92.6, 108, 4.29735, 5.01023, 0.271188, 0.316553, 0.368939, 0.429735, 0.501023, 0.58427, 0.681481, 0.794662, 0.926283, 1.26143,
   1.46588, 1.70968, 1.99437, 2.32304, 2.71188, 3.16553, 3.68939, 1.08167 };
   Double_t gr_exp6_errtot_fy3006[41] = { 1.67, 70.8, 50.1, 34.5, 24.1, 16.5, 12, 7.96, 5.61, 3.91, 2.51, 1220, 1.1, 0.735, 0.487, 0.322, 0.21,
   0.136, 0.0917, 0.0608, 0.04, 127, 99.5, 1290, 1350, 1350, 1330, 1270, 1240, 1160, 1070, 979, 754,
   645, 544, 447, 362, 290, 224, 171, 867 };
   Double_t gr_exp6_errtot_felx3006[41] = { 2, 0.4327, 0.50481, 0.58662, 0.68283, 0.8167, 0.9143, 1.0588, 1.2968, 1.4437, 1.7, 0.017304, 2.2, 2.7, 3.1, 3.6, 4.2,
   4.8, 5.7, 6.8, 8, 0.31735, 0.37023, 0.020188, 0.023553, 0.026939, 0.031735, 0.037023, 0.04327, 0.050481, 0.058662, 0.068283, 0.09143,
   0.10588, 0.12968, 0.14437, 0.17304, 0.20188, 0.23553, 0.26939, 0.08167 };
   Double_t gr_exp6_errtot_fely3006[41] = { 0.07071068, 4.368066, 3.006659, 2.10238, 1.50333, 1.004988, 0.7071068, 0.4925444, 0.3423449, 0.2418677, 0.1019804, 92.19544, 0.0509902, 0.03201562, 0.02088061, 0.01486607, 0.009848858,
   0.006708204, 0.004382921, 0.003001666, 0.002080865, 7.28011, 5.990826, 92.19544, 92.19544, 92.19544, 82.46211, 82.46211, 70.71068, 70.71068, 60.82763, 52.95281, 40.79216,
   35.69314, 29.61419, 24.5153, 20.39608, 16.27882, 13.34166, 10.19804, 46.87217 };
   Double_t gr_exp6_errtot_fehx3006[41] = { 2.2, 0.4673, 0.54519, 0.63338, 0.73717, 0.8833, 0.9857, 1.1412, 1.4032, 1.5563, 1.9, 0.018696, 2.6, 3, 3.5, 4.1, 4.8,
   5.7, 6.5, 7.4, 9, 0.34265, 0.39977, 0.021812, 0.025447, 0.029061, 0.034265, 0.039977, 0.04673, 0.054519, 0.063338, 0.073717, 0.09857,
   0.11412, 0.14032, 0.15563, 0.18696, 0.21812, 0.25447, 0.29061, 0.08833 };
   Double_t gr_exp6_errtot_fehy3006[41] = { 0.07071068, 4.368066, 3.006659, 2.10238, 1.50333, 1.004988, 0.7071068, 0.4925444, 0.3423449, 0.2418677, 0.1019804, 92.19544, 0.0509902, 0.03201562, 0.02088061, 0.01486607, 0.009848858,
   0.006708204, 0.004382921, 0.003001666, 0.002080865, 7.28011, 5.990826, 92.19544, 92.19544, 92.19544, 82.46211, 82.46211, 70.71068, 70.71068, 60.82763, 52.95281, 40.79216,
   35.69314, 29.61419, 24.5153, 20.39608, 16.27882, 13.34166, 10.19804, 46.87217 };
   grae = new TGraphAsymmErrors(41,gr_exp6_errtot_fx3006,gr_exp6_errtot_fy3006,gr_exp6_errtot_felx3006,gr_exp6_errtot_fehx3006,gr_exp6_errtot_fely3006,gr_exp6_errtot_fehy3006);
   grae->SetName("gr_exp6_errtot");
   grae->SetTitle("BESS (1998/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cc00ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cc00ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(32);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp6_errtot3006 = new TH1F("Graph_gr_exp6_errtot3006","BESS (1998/07)",100,0.1935,128.6785);
   Graph_gr_exp6_errtot3006->SetMinimum(0.03412722);
   Graph_gr_exp6_errtot3006->SetMaximum(1586.411);
   Graph_gr_exp6_errtot3006->SetDirectory(nullptr);
   Graph_gr_exp6_errtot3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp6_errtot3006->SetLineColor(ci);
   Graph_gr_exp6_errtot3006->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp6_errtot3006->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp6_errtot3006->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp6_errtot3006->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp6_errtot3006->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp6_errtot3006->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp6_errtot3006->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp6_errtot3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp6_errtot3006);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp7_errtot_fx3007[30] = { 3.68939, 4.29735, 5.01023, 5.8427, 6.81481, 7.94662, 9.26283, 10.8167, 12.6143, 14.6588, 17.0968, 19.9437, 3.16553, 2.71188, 2.32304, 1.99437, 1.70968,
   1.46588, 1.26143, 1.08167, 0.926283, 0.794662, 0.681481, 0.58427, 0.232304, 0.271188, 0.316553, 0.368939, 0.429735, 0.501023 };
   Double_t gr_exp7_errtot_fy3007[30] = { 152, 115, 92.8, 66.8, 48.2, 33.4, 24.3, 16, 11.6, 7.88, 5.52, 3.79, 198, 261, 311, 393, 491,
   558, 660, 724, 832, 857, 933, 985, 988, 1040, 1120, 1100, 1090, 1050 };
   Double_t gr_exp7_errtot_felx3007[30] = { 0.26939, 0.31735, 0.37023, 0.4327, 0.50481, 0.58662, 0.68283, 0.8167, 0.9143, 1.0588, 1.2968, 1.4437, 0.23553, 0.20188, 0.17304, 0.14437, 0.12968,
   0.10588, 0.09143, 0.08167, 0.068283, 0.058662, 0.050481, 0.04327, 0.017304, 0.020188, 0.023553, 0.026939, 0.031735, 0.037023 };
   Double_t gr_exp7_errtot_fely3007[30] = { 9.219544, 7.28011, 5.604463, 4.080441, 2.915476, 2.009975, 1.513275, 1.004988, 0.7071068, 0.4850773, 0.3452535, 0.235372, 11.40175, 15.29706, 17.46425, 21.58703, 26.68333,
   30.59412, 35.90265, 38.83298, 45.12206, 48.05206, 53.36666, 58.46366, 78.58753, 72.8011, 72.8011, 72.8011, 72.8011, 60.82763 };
   Double_t gr_exp7_errtot_fehx3007[30] = { 0.29061, 0.34265, 0.39977, 0.4673, 0.54519, 0.63338, 0.73717, 0.8833, 0.9857, 1.1412, 1.4032, 1.5563, 0.25447, 0.21812, 0.18696, 0.15563, 0.14032,
   0.11412, 0.09857, 0.08833, 0.073717, 0.063338, 0.054519, 0.04673, 0.018696, 0.021812, 0.025447, 0.029061, 0.034265, 0.039977 };
   Double_t gr_exp7_errtot_fehy3007[30] = { 9.219544, 7.28011, 5.604463, 4.080441, 2.915476, 2.009975, 1.513275, 1.004988, 0.7071068, 0.4850773, 0.3452535, 0.235372, 11.40175, 15.29706, 17.46425, 21.58703, 26.68333,
   30.59412, 35.90265, 38.83298, 45.12206, 48.05206, 53.36666, 58.46366, 78.58753, 72.8011, 72.8011, 72.8011, 72.8011, 60.82763 };
   grae = new TGraphAsymmErrors(30,gr_exp7_errtot_fx3007,gr_exp7_errtot_fy3007,gr_exp7_errtot_felx3007,gr_exp7_errtot_fehx3007,gr_exp7_errtot_fely3007,gr_exp7_errtot_fehy3007);
   grae->SetName("gr_exp7_errtot");
   grae->SetTitle("BESS (1999/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff66ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff66ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(30);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp7_errtot3007 = new TH1F("Graph_gr_exp7_errtot3007","BESS (1999/08)",100,0.1935,23.6285);
   Graph_gr_exp7_errtot3007->SetMinimum(3.199165);
   Graph_gr_exp7_errtot3007->SetMaximum(1311.726);
   Graph_gr_exp7_errtot3007->SetDirectory(nullptr);
   Graph_gr_exp7_errtot3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp7_errtot3007->SetLineColor(ci);
   Graph_gr_exp7_errtot3007->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp7_errtot3007->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp7_errtot3007->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp7_errtot3007->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp7_errtot3007->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp7_errtot3007->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp7_errtot3007->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp7_errtot3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp7_errtot3007);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp8_errtot_fx3008[30] = { 4.29735, 1.26143, 5.01023, 5.8427, 6.81481, 7.94662, 9.26283, 10.8167, 12.6143, 14.6588, 17.0968, 19.9437, 3.16553, 1.46588, 1.08167, 0.926283, 0.794662,
   0.681481, 0.58427, 0.501023, 0.429735, 0.368939, 0.316553, 0.271188, 0.232304, 1.70968, 1.99437, 2.32304, 2.71188, 3.68939 };
   Double_t gr_exp8_errtot_fy3008[30] = { 77.5, 234, 62.4, 49.7, 37.4, 27, 20.4, 14.2, 10.6, 7.22, 5.15, 3.6, 114, 212, 239, 249, 248,
   246, 243, 233, 232, 213, 206, 192, 169, 198, 177, 155, 134, 95.5 };
   Double_t gr_exp8_errtot_felx3008[30] = { 0.31735, 0.09143, 0.37023, 0.4327, 0.50481, 0.58662, 0.68283, 0.8167, 0.9143, 1.0588, 1.2968, 1.4437, 0.23553, 0.10588, 0.08167, 0.068283, 0.058662,
   0.050481, 0.04327, 0.037023, 0.031735, 0.026939, 0.023553, 0.020188, 0.017304, 0.12968, 0.14437, 0.17304, 0.20188, 0.26939 };
   Double_t gr_exp8_errtot_fely3008[30] = { 4.589118, 13.34166, 3.765634, 2.961419, 2.209072, 1.603122, 1.204159, 0.9055385, 0.6082763, 0.4418144, 0.3114482, 0.222036, 7.071068, 12.16553, 13.34166, 14.31782, 15.29706,
   16.49242, 16.49242, 16.49242, 17.46425, 17.46425, 17.46425, 18.43909, 18.43909, 11.18034, 10.19804, 9.219544, 8.062258, 5.608921 };
   Double_t gr_exp8_errtot_fehx3008[30] = { 0.34265, 0.09857, 0.39977, 0.4673, 0.54519, 0.63338, 0.73717, 0.8833, 0.9857, 1.1412, 1.4032, 1.5563, 0.25447, 0.11412, 0.08833, 0.073717, 0.063338,
   0.054519, 0.04673, 0.039977, 0.034265, 0.029061, 0.025447, 0.021812, 0.018696, 0.14032, 0.15563, 0.18696, 0.21812, 0.29061 };
   Double_t gr_exp8_errtot_fehy3008[30] = { 4.589118, 13.34166, 3.765634, 2.961419, 2.209072, 1.603122, 1.204159, 0.9055385, 0.6082763, 0.4418144, 0.3114482, 0.222036, 7.071068, 12.16553, 13.34166, 14.31782, 15.29706,
   16.49242, 16.49242, 16.49242, 17.46425, 17.46425, 17.46425, 18.43909, 18.43909, 11.18034, 10.19804, 9.219544, 8.062258, 5.608921 };
   grae = new TGraphAsymmErrors(30,gr_exp8_errtot_fx3008,gr_exp8_errtot_fy3008,gr_exp8_errtot_felx3008,gr_exp8_errtot_fehx3008,gr_exp8_errtot_fely3008,gr_exp8_errtot_fehy3008);
   grae->SetName("gr_exp8_errtot");
   grae->SetTitle("BESS (2000/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#999999");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(28);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp8_errtot3008 = new TH1F("Graph_gr_exp8_errtot3008","BESS (2000/08)",100,0.1935,23.6285);
   Graph_gr_exp8_errtot3008->SetMinimum(3.040168);
   Graph_gr_exp8_errtot3008->SetMaximum(289.3118);
   Graph_gr_exp8_errtot3008->SetDirectory(nullptr);
   Graph_gr_exp8_errtot3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp8_errtot3008->SetLineColor(ci);
   Graph_gr_exp8_errtot3008->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp8_errtot3008->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp8_errtot3008->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp8_errtot3008->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp8_errtot3008->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp8_errtot3008->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp8_errtot3008->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp8_errtot3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp8_errtot3008);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp9_errtot_fx3009[47] = { 463, 58.3, 9.26283, 10.8167, 12.6143, 14.6588, 19.9437, 23.2, 27.1, 31.6, 36.8, 42.9, 50, 17.0968, 68, 79.2, 92.3,
   112, 140, 177, 222, 281, 352, 0.232304, 0.681481, 0.271188, 0.316553, 0.368939, 0.429735, 0.501023, 0.58427, 7.94662, 0.794662,
   0.926283, 1.08167, 1.26143, 1.70968, 6.81481, 5.8427, 5.01023, 4.29735, 3.68939, 3.16553, 2.71188, 2.32304, 1.99437, 1.46588 };
   Double_t gr_exp9_errtot_fy3009[47] = { 0.000747, 0.207, 22.2, 15.5, 10.9, 7.49, 3.53, 2.48, 1.62, 1.09, 0.717, 0.484, 0.315, 5.21, 0.134, 0.0909, 0.0575,
   0.0343, 0.0198, 0.01, 0.00542, 0.00246, 0.00162, 222, 352, 255, 281, 304, 321, 328, 351, 31.1, 346,
   337, 328, 305, 264, 43, 55.9, 73, 93.4, 117, 143, 172, 205, 236, 287 };
   Double_t gr_exp9_errtot_felx3009[47] = { 65, 4.2, 0.68283, 0.8167, 0.9143, 1.0588, 1.4437, 1.7, 2, 2.3, 2.7, 3.1, 3.6, 1.2968, 4.9, 5.6, 6.5,
   12, 14, 19, 22, 30, 36, 0.017304, 0.050481, 0.020188, 0.023553, 0.026939, 0.031735, 0.037023, 0.04327, 0.58662, 0.058662,
   0.068283, 0.08167, 0.09143, 0.12968, 0.50481, 0.4327, 0.37023, 0.31735, 0.26939, 0.23553, 0.20188, 0.17304, 0.14437, 0.10588 };
   Double_t gr_exp9_errtot_fely3009[47] = { 0.0001041393, 0.009486833, 0.6708204, 0.509902, 0.4123106, 0.2729469, 0.1431782, 0.1019804, 0.06082763, 0.04123106, 0.03104835, 0.02184033, 0.01486607, 0.1923538, 0.006708204, 0.004701064, 0.003130495,
   0.002109502, 0.00130384, 0.000781025, 0.0004601087, 0.000254951, 0.0001979899, 18.02776, 13.60147, 17.72005, 17.72005, 16.76305, 16.76305, 15.52417, 14.56022, 0.9848858, 12.64911,
   11.40175, 11.40175, 10.44031, 8.246211, 1.3, 1.708801, 2.213594, 2.84605, 3.162278, 4.123106, 5.09902, 6.324555, 7.28011, 9.486833 };
   Double_t gr_exp9_errtot_fehx3009[47] = { 78, 4.8, 0.73717, 0.8833, 0.9857, 1.1412, 1.5563, 1.9, 2.2, 2.5, 3, 3.5, 4.1, 1.4032, 5.6, 6.6, 7.7,
   14, 18, 23, 29, 35, 46, 0.018696, 0.054519, 0.021812, 0.025447, 0.029061, 0.034265, 0.039977, 0.04673, 0.63338, 0.063338,
   0.073717, 0.08833, 0.09857, 0.14032, 0.54519, 0.4673, 0.39977, 0.34265, 0.29061, 0.25447, 0.21812, 0.18696, 0.15563, 0.11412 };
   Double_t gr_exp9_errtot_fehy3009[47] = { 0.0001041393, 0.009486833, 0.6708204, 0.509902, 0.4123106, 0.2729469, 0.1431782, 0.1019804, 0.06082763, 0.04123106, 0.03104835, 0.02184033, 0.01486607, 0.1923538, 0.006708204, 0.004701064, 0.003130495,
   0.002109502, 0.00130384, 0.000781025, 0.0004601087, 0.000254951, 0.0001979899, 18.02776, 13.60147, 17.72005, 17.72005, 16.76305, 16.76305, 15.52417, 14.56022, 0.9848858, 12.64911,
   11.40175, 11.40175, 10.44031, 8.246211, 1.3, 1.708801, 2.213594, 2.84605, 3.162278, 4.123106, 5.09902, 6.324555, 7.28011, 9.486833 };
   grae = new TGraphAsymmErrors(47,gr_exp9_errtot_fx3009,gr_exp9_errtot_fy3009,gr_exp9_errtot_felx3009,gr_exp9_errtot_fehx3009,gr_exp9_errtot_fely3009,gr_exp9_errtot_fehy3009);
   grae->SetName("gr_exp9_errtot");
   grae->SetTitle("BESS-TeV (2002/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#990000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#990000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(27);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp9_errtot3009 = new TH1F("Graph_gr_exp9_errtot3009","BESS-TeV (2002/08)",100,0.1935,595.0785);
   Graph_gr_exp9_errtot3009->SetMinimum(0.0005785746);
   Graph_gr_exp9_errtot3009->SetMaximum(402.1616);
   Graph_gr_exp9_errtot3009->SetDirectory(nullptr);
   Graph_gr_exp9_errtot3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp9_errtot3009->SetLineColor(ci);
   Graph_gr_exp9_errtot3009->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp9_errtot3009->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp9_errtot3009->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp9_errtot3009->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp9_errtot3009->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp9_errtot3009->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp9_errtot3009->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp9_errtot3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp9_errtot3009);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp10_errtot_fx3010[3] = { 0.797, 0.978, 1.263 };
   Double_t gr_exp10_errtot_fy3010[3] = { 150, 230, 340 };
   Double_t gr_exp10_errtot_felx3010[3] = { 0.067, 0.108, 0.153 };
   Double_t gr_exp10_errtot_fely3010[3] = { 40, 40, 50 };
   Double_t gr_exp10_errtot_fehx3010[3] = { 0.073, 0.132, 0.187 };
   Double_t gr_exp10_errtot_fehy3010[3] = { 40, 40, 50 };
   grae = new TGraphAsymmErrors(3,gr_exp10_errtot_fx3010,gr_exp10_errtot_fy3010,gr_exp10_errtot_felx3010,gr_exp10_errtot_fehx3010,gr_exp10_errtot_fely3010,gr_exp10_errtot_fehy3010);
   grae->SetName("gr_exp10_errtot");
   grae->SetTitle("Balloon (1955/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cccc");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp10_errtot3010 = new TH1F("Graph_gr_exp10_errtot3010","Balloon (1955/07)",100,0.658,1.522);
   Graph_gr_exp10_errtot3010->SetMinimum(82);
   Graph_gr_exp10_errtot3010->SetMaximum(418);
   Graph_gr_exp10_errtot3010->SetDirectory(nullptr);
   Graph_gr_exp10_errtot3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp10_errtot3010->SetLineColor(ci);
   Graph_gr_exp10_errtot3010->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp10_errtot3010->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp10_errtot3010->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp10_errtot3010->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp10_errtot3010->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp10_errtot3010->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp10_errtot3010->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp10_errtot3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp10_errtot3010);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp11_errtot_fx3011[2] = { 0.978, 1.263 };
   Double_t gr_exp11_errtot_fy3011[2] = { 110, 230 };
   Double_t gr_exp11_errtot_felx3011[2] = { 0.108, 0.153 };
   Double_t gr_exp11_errtot_fely3011[2] = { 30, 40 };
   Double_t gr_exp11_errtot_fehx3011[2] = { 0.132, 0.187 };
   Double_t gr_exp11_errtot_fehy3011[2] = { 30, 40 };
   grae = new TGraphAsymmErrors(2,gr_exp11_errtot_fx3011,gr_exp11_errtot_fy3011,gr_exp11_errtot_felx3011,gr_exp11_errtot_fehx3011,gr_exp11_errtot_fely3011,gr_exp11_errtot_fehy3011);
   grae->SetName("gr_exp11_errtot");
   grae->SetTitle("Balloon (1956/03)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#33ff00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#33ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp11_errtot3011 = new TH1F("Graph_gr_exp11_errtot3011","Balloon (1956/03)",100,0.812,1.508);
   Graph_gr_exp11_errtot3011->SetMinimum(61);
   Graph_gr_exp11_errtot3011->SetMaximum(289);
   Graph_gr_exp11_errtot3011->SetDirectory(nullptr);
   Graph_gr_exp11_errtot3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp11_errtot3011->SetLineColor(ci);
   Graph_gr_exp11_errtot3011->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp11_errtot3011->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp11_errtot3011->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp11_errtot3011->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp11_errtot3011->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp11_errtot3011->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp11_errtot3011->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp11_errtot3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp11_errtot3011);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp12_errtot_fx3012[3] = { 0.797, 0.978, 1.263 };
   Double_t gr_exp12_errtot_fy3012[3] = { 50, 120, 250 };
   Double_t gr_exp12_errtot_felx3012[3] = { 0.067, 0.108, 0.153 };
   Double_t gr_exp12_errtot_fely3012[3] = { 20, 40, 50 };
   Double_t gr_exp12_errtot_fehx3012[3] = { 0.073, 0.132, 0.187 };
   Double_t gr_exp12_errtot_fehy3012[3] = { 20, 40, 50 };
   grae = new TGraphAsymmErrors(3,gr_exp12_errtot_fx3012,gr_exp12_errtot_fy3012,gr_exp12_errtot_felx3012,gr_exp12_errtot_fehx3012,gr_exp12_errtot_fely3012,gr_exp12_errtot_fehy3012);
   grae->SetName("gr_exp12_errtot");
   grae->SetTitle("Balloon (1956/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff6699");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff6699");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp12_errtot3012 = new TH1F("Graph_gr_exp12_errtot3012","Balloon (1956/08)",100,0.658,1.522);
   Graph_gr_exp12_errtot3012->SetMinimum(3);
   Graph_gr_exp12_errtot3012->SetMaximum(327);
   Graph_gr_exp12_errtot3012->SetDirectory(nullptr);
   Graph_gr_exp12_errtot3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp12_errtot3012->SetLineColor(ci);
   Graph_gr_exp12_errtot3012->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp12_errtot3012->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp12_errtot3012->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp12_errtot3012->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp12_errtot3012->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp12_errtot3012->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp12_errtot3012->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp12_errtot3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp12_errtot3012);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp13_errtot_fx3013[6] = { 0.264, 0.487, 0.353, 0.171, 0.146, 0.209 };
   Double_t gr_exp13_errtot_fy3013[6] = { 981, 851, 891, 1000, 819, 819 };
   Double_t gr_exp13_errtot_felx3013[6] = { 0.032, 0.073, 0.053, 0.015, 0.01, 0.022 };
   Double_t gr_exp13_errtot_fely3013[6] = { 98.1, 67.6, 89.1, 173, 246, 107 };
   Double_t gr_exp13_errtot_fehx3013[6] = { 0.036, 0.075, 0.061, 0.016, 0.01, 0.023 };
   Double_t gr_exp13_errtot_fehy3013[6] = { 98.1, 67.6, 89.1, 173, 246, 107 };
   grae = new TGraphAsymmErrors(6,gr_exp13_errtot_fx3013,gr_exp13_errtot_fy3013,gr_exp13_errtot_felx3013,gr_exp13_errtot_fehx3013,gr_exp13_errtot_fely3013,gr_exp13_errtot_fehy3013);
   grae->SetName("gr_exp13_errtot");
   grae->SetTitle("Balloon (1956/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0033ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0033ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp13_errtot3013 = new TH1F("Graph_gr_exp13_errtot3013","Balloon (1956/09)",100,0.0934,0.6046);
   Graph_gr_exp13_errtot3013->SetMinimum(513);
   Graph_gr_exp13_errtot3013->SetMaximum(1233);
   Graph_gr_exp13_errtot3013->SetDirectory(nullptr);
   Graph_gr_exp13_errtot3013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp13_errtot3013->SetLineColor(ci);
   Graph_gr_exp13_errtot3013->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp13_errtot3013->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp13_errtot3013->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp13_errtot3013->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp13_errtot3013->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp13_errtot3013->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp13_errtot3013->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp13_errtot3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp13_errtot3013);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp14_errtot_fx3014[1] = { 0.52 };
   Double_t gr_exp14_errtot_fy3014[1] = { 80.4357 };
   Double_t gr_exp14_errtot_felx3014[1] = { 0 };
   Double_t gr_exp14_errtot_fely3014[1] = { 16.1 };
   Double_t gr_exp14_errtot_fehx3014[1] = { 0 };
   Double_t gr_exp14_errtot_fehy3014[1] = { 16.1 };
   grae = new TGraphAsymmErrors(1,gr_exp14_errtot_fx3014,gr_exp14_errtot_fy3014,gr_exp14_errtot_felx3014,gr_exp14_errtot_fehx3014,gr_exp14_errtot_fely3014,gr_exp14_errtot_fehy3014);
   grae->SetName("gr_exp14_errtot");
   grae->SetTitle("Balloon (1959/05)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cccc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cccc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(29);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp14_errtot3014 = new TH1F("Graph_gr_exp14_errtot3014","Balloon (1959/05)",100,0.42,1.62);
   Graph_gr_exp14_errtot3014->SetMinimum(61.1157);
   Graph_gr_exp14_errtot3014->SetMaximum(99.7557);
   Graph_gr_exp14_errtot3014->SetDirectory(nullptr);
   Graph_gr_exp14_errtot3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp14_errtot3014->SetLineColor(ci);
   Graph_gr_exp14_errtot3014->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp14_errtot3014->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp14_errtot3014->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp14_errtot3014->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp14_errtot3014->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp14_errtot3014->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp14_errtot3014->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp14_errtot3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp14_errtot3014);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp15_errtot_fx3015[5] = { 0.373, 0.52, 0.278, 0.23, 0.183 };
   Double_t gr_exp15_errtot_fy3015[5] = { 140.313, 230.582, 195.112, 133.82, 69.1298 };
   Double_t gr_exp15_errtot_felx3015[5] = { 0, 0, 0, 0, 0 };
   Double_t gr_exp15_errtot_fely3015[5] = { 22.2, 26.8, 32.5, 42.3, 34.6 };
   Double_t gr_exp15_errtot_fehx3015[5] = { 0, 0, 0, 0, 0 };
   Double_t gr_exp15_errtot_fehy3015[5] = { 22.2, 26.8, 32.5, 42.3, 34.6 };
   grae = new TGraphAsymmErrors(5,gr_exp15_errtot_fx3015,gr_exp15_errtot_fy3015,gr_exp15_errtot_felx3015,gr_exp15_errtot_fehx3015,gr_exp15_errtot_fely3015,gr_exp15_errtot_fehy3015);
   grae->SetName("gr_exp15_errtot");
   grae->SetTitle("Balloon (1959/06)");
   grae->SetFillStyle(0);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp15_errtot3015 = new TH1F("Graph_gr_exp15_errtot3015","Balloon (1959/06)",100,0.1493,0.5537);
   Graph_gr_exp15_errtot3015->SetMinimum(12.24458);
   Graph_gr_exp15_errtot3015->SetMaximum(279.6672);
   Graph_gr_exp15_errtot3015->SetDirectory(nullptr);
   Graph_gr_exp15_errtot3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp15_errtot3015->SetLineColor(ci);
   Graph_gr_exp15_errtot3015->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp15_errtot3015->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp15_errtot3015->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp15_errtot3015->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp15_errtot3015->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp15_errtot3015->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp15_errtot3015->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp15_errtot3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp15_errtot3015);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp16_errtot_fx3016[4] = { 0.09, 0.114, 0.144, 0.179 };
   Double_t gr_exp16_errtot_fy3016[4] = { 600, 880, 750, 410 };
   Double_t gr_exp16_errtot_felx3016[4] = { 0.008, 0.014, 0.014, 0.019 };
   Double_t gr_exp16_errtot_fely3016[4] = { 21, 18, 16, 11 };
   Double_t gr_exp16_errtot_fehx3016[4] = { 0.01, 0.016, 0.016, 0.021 };
   Double_t gr_exp16_errtot_fehy3016[4] = { 21, 18, 16, 11 };
   grae = new TGraphAsymmErrors(4,gr_exp16_errtot_fx3016,gr_exp16_errtot_fy3016,gr_exp16_errtot_felx3016,gr_exp16_errtot_fehx3016,gr_exp16_errtot_fely3016,gr_exp16_errtot_fehy3016);
   grae->SetName("gr_exp16_errtot");
   grae->SetTitle("Balloon (1960/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(34);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp16_errtot3016 = new TH1F("Graph_gr_exp16_errtot3016","Balloon (1960/08)",100,0.0702,0.2118);
   Graph_gr_exp16_errtot3016->SetMinimum(349.1);
   Graph_gr_exp16_errtot3016->SetMaximum(947.9);
   Graph_gr_exp16_errtot3016->SetDirectory(nullptr);
   Graph_gr_exp16_errtot3016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp16_errtot3016->SetLineColor(ci);
   Graph_gr_exp16_errtot3016->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp16_errtot3016->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp16_errtot3016->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp16_errtot3016->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp16_errtot3016->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp16_errtot3016->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp16_errtot3016->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp16_errtot3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp16_errtot3016);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp17_errtot_fx3017[6] = { 0.164, 0.313, 0.257, 0.211, 0.127, 0.093 };
   Double_t gr_exp17_errtot_fy3017[6] = { 737.8, 565.9, 637.1, 494.3, 1460, 2067 };
   Double_t gr_exp17_errtot_felx3017[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp17_errtot_fely3017[6] = { 62.8, 58.7, 51.5, 64, 99.3, 167 };
   Double_t gr_exp17_errtot_fehx3017[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp17_errtot_fehy3017[6] = { 62.8, 58.7, 51.5, 64, 99.3, 167 };
   grae = new TGraphAsymmErrors(6,gr_exp17_errtot_fx3017,gr_exp17_errtot_fy3017,gr_exp17_errtot_felx3017,gr_exp17_errtot_fehx3017,gr_exp17_errtot_fely3017,gr_exp17_errtot_fehy3017);
   grae->SetName("gr_exp17_errtot");
   grae->SetTitle("Balloon (1960/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(5);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp17_errtot3017 = new TH1F("Graph_gr_exp17_errtot3017","Balloon (1960/09)",100,0.071,0.335);
   Graph_gr_exp17_errtot3017->SetMinimum(249.93);
   Graph_gr_exp17_errtot3017->SetMaximum(2414.37);
   Graph_gr_exp17_errtot3017->SetDirectory(nullptr);
   Graph_gr_exp17_errtot3017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp17_errtot3017->SetLineColor(ci);
   Graph_gr_exp17_errtot3017->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp17_errtot3017->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp17_errtot3017->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp17_errtot3017->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp17_errtot3017->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp17_errtot3017->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp17_errtot3017->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp17_errtot3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp17_errtot3017);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp18_errtot_fx3018[7] = { 0.081, 0.097, 0.126, 0.164, 0.211, 0.257, 0.309 };
   Double_t gr_exp18_errtot_fy3018[7] = { 1239, 1239, 810.4, 506.4, 594.2, 589.4, 691.5 };
   Double_t gr_exp18_errtot_felx3018[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp18_errtot_fely3018[7] = { 250, 121, 76.3, 47.6, 55.9, 82.6, 65.1 };
   Double_t gr_exp18_errtot_fehx3018[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp18_errtot_fehy3018[7] = { 250, 121, 76.3, 47.6, 55.9, 82.6, 65.1 };
   grae = new TGraphAsymmErrors(7,gr_exp18_errtot_fx3018,gr_exp18_errtot_fy3018,gr_exp18_errtot_felx3018,gr_exp18_errtot_fehx3018,gr_exp18_errtot_fely3018,gr_exp18_errtot_fehy3018);
   grae->SetName("gr_exp18_errtot");
   grae->SetTitle("Balloon (1961/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp18_errtot3018 = new TH1F("Graph_gr_exp18_errtot3018","Balloon (1961/08)",100,0.0582,0.3318);
   Graph_gr_exp18_errtot3018->SetMinimum(355.78);
   Graph_gr_exp18_errtot3018->SetMaximum(1592.02);
   Graph_gr_exp18_errtot3018->SetDirectory(nullptr);
   Graph_gr_exp18_errtot3018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp18_errtot3018->SetLineColor(ci);
   Graph_gr_exp18_errtot3018->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp18_errtot3018->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp18_errtot3018->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp18_errtot3018->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp18_errtot3018->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp18_errtot3018->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp18_errtot3018->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp18_errtot3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp18_errtot3018);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp19_errtot_fx3019[9] = { 0.489, 0.774, 1.224, 1.936, 2.738, 3.464, 0.09, 0.141, 0.282 };
   Double_t gr_exp19_errtot_fy3019[9] = { 680, 895, 670, 399, 349, 172, 490, 930, 1080 };
   Double_t gr_exp19_errtot_felx3019[9] = { 0.089, 0.174, 0.224, 0.436, 0.238, 0.464, 0.009, 0.041, 0.082 };
   Double_t gr_exp19_errtot_fely3019[9] = { 200, 150, 120, 66, 87, 43, 200, 360, 250 };
   Double_t gr_exp19_errtot_fehx3019[9] = { 0.111, 0.226, 0.276, 0.564, 0.262, 0.536, 0.011, 0.059, 0.118 };
   Double_t gr_exp19_errtot_fehy3019[9] = { 200, 150, 120, 66, 87, 43, 200, 360, 250 };
   grae = new TGraphAsymmErrors(9,gr_exp19_errtot_fx3019,gr_exp19_errtot_fy3019,gr_exp19_errtot_felx3019,gr_exp19_errtot_fehx3019,gr_exp19_errtot_fely3019,gr_exp19_errtot_fehy3019);
   grae->SetName("gr_exp19_errtot");
   grae->SetTitle("Balloon (1963/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp19_errtot3019 = new TH1F("Graph_gr_exp19_errtot3019","Balloon (1963/07)",100,0.0729,4.3919);
   Graph_gr_exp19_errtot3019->SetMinimum(8.9);
   Graph_gr_exp19_errtot3019->SetMaximum(1450.1);
   Graph_gr_exp19_errtot3019->SetDirectory(nullptr);
   Graph_gr_exp19_errtot3019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp19_errtot3019->SetLineColor(ci);
   Graph_gr_exp19_errtot3019->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp19_errtot3019->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp19_errtot3019->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp19_errtot3019->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp19_errtot3019->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp19_errtot3019->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp19_errtot3019->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp19_errtot3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp19_errtot3019);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp20_errtot_fx3020[3] = { 0.0712, 0.12, 0.205 };
   Double_t gr_exp20_errtot_fy3020[3] = { 120, 940, 1210 };
   Double_t gr_exp20_errtot_felx3020[3] = { 0, 0, 0 };
   Double_t gr_exp20_errtot_fely3020[3] = { 86, 35, 29 };
   Double_t gr_exp20_errtot_fehx3020[3] = { 0.0002, 0, 0 };
   Double_t gr_exp20_errtot_fehy3020[3] = { 86, 35, 29 };
   grae = new TGraphAsymmErrors(3,gr_exp20_errtot_fx3020,gr_exp20_errtot_fy3020,gr_exp20_errtot_felx3020,gr_exp20_errtot_fehx3020,gr_exp20_errtot_fely3020,gr_exp20_errtot_fehy3020);
   grae->SetName("gr_exp20_errtot");
   grae->SetTitle("Balloon (1964/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cc00ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cc00ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(26);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp20_errtot3020 = new TH1F("Graph_gr_exp20_errtot3020","Balloon (1964/06)",100,0.05782,0.21838);
   Graph_gr_exp20_errtot3020->SetMinimum(30.6);
   Graph_gr_exp20_errtot3020->SetMaximum(1359.5);
   Graph_gr_exp20_errtot3020->SetDirectory(nullptr);
   Graph_gr_exp20_errtot3020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp20_errtot3020->SetLineColor(ci);
   Graph_gr_exp20_errtot3020->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp20_errtot3020->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp20_errtot3020->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp20_errtot3020->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp20_errtot3020->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp20_errtot3020->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp20_errtot3020->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp20_errtot3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp20_errtot3020);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp21_errtot_fx3021[6] = { 0.149, 0.204, 0.262, 0.361, 0.919, 0.506 };
   Double_t gr_exp21_errtot_fy3021[6] = { 1046, 1024, 1204, 1146, 841.7, 1479 };
   Double_t gr_exp21_errtot_felx3021[6] = { 0.025, 0.03, 0.031, 0.069, 0.342, 0.077 };
   Double_t gr_exp21_errtot_fely3021[6] = { 86.3, 79.7, 81.6, 89.3, 74.1, 184 };
   Double_t gr_exp21_errtot_fehx3021[6] = { 0.025, 0.027, 0.03, 0.068, 0.334, 0.071 };
   Double_t gr_exp21_errtot_fehy3021[6] = { 86.3, 79.7, 81.6, 89.3, 74.1, 184 };
   grae = new TGraphAsymmErrors(6,gr_exp21_errtot_fx3021,gr_exp21_errtot_fy3021,gr_exp21_errtot_felx3021,gr_exp21_errtot_fehx3021,gr_exp21_errtot_fely3021,gr_exp21_errtot_fehy3021);
   grae->SetName("gr_exp21_errtot");
   grae->SetTitle("Balloon (1964/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff66ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff66ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(32);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp21_errtot3021 = new TH1F("Graph_gr_exp21_errtot3021","Balloon (1964/09)",100,0.0111,1.3659);
   Graph_gr_exp21_errtot3021->SetMinimum(678.06);
   Graph_gr_exp21_errtot3021->SetMaximum(1752.54);
   Graph_gr_exp21_errtot3021->SetDirectory(nullptr);
   Graph_gr_exp21_errtot3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp21_errtot3021->SetLineColor(ci);
   Graph_gr_exp21_errtot3021->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp21_errtot3021->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp21_errtot3021->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp21_errtot3021->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp21_errtot3021->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp21_errtot3021->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp21_errtot3021->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp21_errtot3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp21_errtot3021);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp22_errtot_fx3022[15] = { 0.647, 1.59, 0.98, 0.11, 0.13, 0.14, 0.177, 0.18, 0.23, 0.24, 0.31, 0.4, 0.434, 0.53, 0.7 };
   Double_t gr_exp22_errtot_fy3022[15] = { 1012, 506, 1029, 1147, 1199, 1455, 1136, 1543, 1671, 1391, 1757, 1709, 1540, 1647, 1368 };
   Double_t gr_exp22_errtot_felx3022[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp22_errtot_fely3022[15] = { 210, 16.9, 34.2, 111, 139, 160, 269, 154, 145, 257, 74.9, 88.9, 243, 90.8, 58.3 };
   Double_t gr_exp22_errtot_fehx3022[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp22_errtot_fehy3022[15] = { 210, 16.9, 34.2, 111, 139, 160, 269, 154, 145, 257, 74.9, 88.9, 243, 90.8, 58.3 };
   grae = new TGraphAsymmErrors(15,gr_exp22_errtot_fx3022,gr_exp22_errtot_fy3022,gr_exp22_errtot_felx3022,gr_exp22_errtot_fehx3022,gr_exp22_errtot_fely3022,gr_exp22_errtot_fehy3022);
   grae->SetName("gr_exp22_errtot");
   grae->SetTitle("Balloon (1965/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#999999");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(30);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp22_errtot3022 = new TH1F("Graph_gr_exp22_errtot3022","Balloon (1965/06)",100,0.099,1.738);
   Graph_gr_exp22_errtot3022->SetMinimum(354.82);
   Graph_gr_exp22_errtot3022->SetMaximum(1966.18);
   Graph_gr_exp22_errtot3022->SetDirectory(nullptr);
   Graph_gr_exp22_errtot3022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp22_errtot3022->SetLineColor(ci);
   Graph_gr_exp22_errtot3022->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp22_errtot3022->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp22_errtot3022->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp22_errtot3022->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp22_errtot3022->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp22_errtot3022->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp22_errtot3022->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp22_errtot3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp22_errtot3022);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp23_errtot_fx3023[5] = { 0.203, 0.11, 0.081, 0.143, 0.277 };
   Double_t gr_exp23_errtot_fy3023[5] = { 1375, 1095, 1045, 1219, 1470 };
   Double_t gr_exp23_errtot_felx3023[5] = { 0.037, 0.015, 0.014, 0.022, 0.04 };
   Double_t gr_exp23_errtot_fely3023[5] = { 144, 91.2, 94.8, 83.9, 132 };
   Double_t gr_exp23_errtot_fehx3023[5] = { 0.034, 0.011, 0.014, 0.023, 0.043 };
   Double_t gr_exp23_errtot_fehy3023[5] = { 144, 91.2, 94.8, 83.9, 132 };
   grae = new TGraphAsymmErrors(5,gr_exp23_errtot_fx3023,gr_exp23_errtot_fy3023,gr_exp23_errtot_felx3023,gr_exp23_errtot_fehx3023,gr_exp23_errtot_fely3023,gr_exp23_errtot_fehy3023);
   grae->SetName("gr_exp23_errtot");
   grae->SetTitle("Balloon (1965/06+1966/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#990000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#990000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(28);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp23_errtot3023 = new TH1F("Graph_gr_exp23_errtot3023","Balloon (1965/06+1966/06)",100,0.0417,0.3453);
   Graph_gr_exp23_errtot3023->SetMinimum(885.02);
   Graph_gr_exp23_errtot3023->SetMaximum(1667.18);
   Graph_gr_exp23_errtot3023->SetDirectory(nullptr);
   Graph_gr_exp23_errtot3023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp23_errtot3023->SetLineColor(ci);
   Graph_gr_exp23_errtot3023->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp23_errtot3023->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp23_errtot3023->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp23_errtot3023->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp23_errtot3023->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp23_errtot3023->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp23_errtot3023->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp23_errtot3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp23_errtot3023);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp24_errtot_fx3024[11] = { 0.99, 1.68, 0.69, 0.51, 0.38, 0.29, 0.17, 0.14, 0.12, 0.1, 0.22 };
   Double_t gr_exp24_errtot_fy3024[11] = { 972, 508, 1273, 1538, 1664, 1680, 1411, 1354, 1074, 970, 1603 };
   Double_t gr_exp24_errtot_felx3024[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp24_errtot_fely3024[11] = { 29.4, 24.8, 34.7, 84.8, 102, 82.2, 155, 153, 114, 116, 103 };
   Double_t gr_exp24_errtot_fehx3024[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp24_errtot_fehy3024[11] = { 29.4, 24.8, 34.7, 84.8, 102, 82.2, 155, 153, 114, 116, 103 };
   grae = new TGraphAsymmErrors(11,gr_exp24_errtot_fx3024,gr_exp24_errtot_fy3024,gr_exp24_errtot_felx3024,gr_exp24_errtot_fehx3024,gr_exp24_errtot_fely3024,gr_exp24_errtot_fehy3024);
   grae->SetName("gr_exp24_errtot");
   grae->SetTitle("Balloon (1965/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cccc");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(27);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp24_errtot3024 = new TH1F("Graph_gr_exp24_errtot3024","Balloon (1965/07)",100,0.09,1.838);
   Graph_gr_exp24_errtot3024->SetMinimum(354.92);
   Graph_gr_exp24_errtot3024->SetMaximum(1894.28);
   Graph_gr_exp24_errtot3024->SetDirectory(nullptr);
   Graph_gr_exp24_errtot3024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp24_errtot3024->SetLineColor(ci);
   Graph_gr_exp24_errtot3024->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp24_errtot3024->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp24_errtot3024->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp24_errtot3024->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp24_errtot3024->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp24_errtot3024->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp24_errtot3024->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp24_errtot3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp24_errtot3024);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp25_errtot_fx3025[7] = { 0.216, 0.452, 0.266, 0.24, 0.19, 0.163, 0.128 };
   Double_t gr_exp25_errtot_fy3025[7] = { 2110, 1600, 2370, 2480, 1780, 1660, 1050 };
   Double_t gr_exp25_errtot_felx3025[7] = { 0.01, 0.173, 0.013, 0.013, 0.014, 0.012, 0.015 };
   Double_t gr_exp25_errtot_fely3025[7] = { 270, 200, 260, 280, 260, 220, 190 };
   Double_t gr_exp25_errtot_fehx3025[7] = { 0.011, 0.28, 0.013, 0.013, 0.016, 0.013, 0.016 };
   Double_t gr_exp25_errtot_fehy3025[7] = { 270, 200, 260, 280, 260, 220, 190 };
   grae = new TGraphAsymmErrors(7,gr_exp25_errtot_fx3025,gr_exp25_errtot_fy3025,gr_exp25_errtot_felx3025,gr_exp25_errtot_fehx3025,gr_exp25_errtot_fely3025,gr_exp25_errtot_fehy3025);
   grae->SetName("gr_exp25_errtot");
   grae->SetTitle("Balloon (1965/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#33ff00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#33ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp25_errtot3025 = new TH1F("Graph_gr_exp25_errtot3025","Balloon (1965/08)",100,0.0511,0.7939);
   Graph_gr_exp25_errtot3025->SetMinimum(670);
   Graph_gr_exp25_errtot3025->SetMaximum(2950);
   Graph_gr_exp25_errtot3025->SetDirectory(nullptr);
   Graph_gr_exp25_errtot3025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp25_errtot3025->SetLineColor(ci);
   Graph_gr_exp25_errtot3025->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp25_errtot3025->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp25_errtot3025->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp25_errtot3025->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp25_errtot3025->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp25_errtot3025->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp25_errtot3025->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp25_errtot3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp25_errtot3025);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp26_errtot_fx3026[11] = { 0.12, 1.66, 1, 0.71, 0.53, 0.41, 0.23, 0.19, 0.16, 0.13, 0.31 };
   Double_t gr_exp26_errtot_fy3026[11] = { 696, 459, 825, 1123, 1309, 1498, 1130, 1121, 1060, 759, 1460 };
   Double_t gr_exp26_errtot_felx3026[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp26_errtot_fely3026[11] = { 78.9, 19.5, 40.2, 40.9, 72.2, 77.9, 124, 120, 106, 101, 117 };
   Double_t gr_exp26_errtot_fehx3026[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp26_errtot_fehy3026[11] = { 78.9, 19.5, 40.2, 40.9, 72.2, 77.9, 124, 120, 106, 101, 117 };
   grae = new TGraphAsymmErrors(11,gr_exp26_errtot_fx3026,gr_exp26_errtot_fy3026,gr_exp26_errtot_felx3026,gr_exp26_errtot_fehx3026,gr_exp26_errtot_fely3026,gr_exp26_errtot_fehy3026);
   grae->SetName("gr_exp26_errtot");
   grae->SetTitle("Balloon (1966/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff6699");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff6699");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp26_errtot3026 = new TH1F("Graph_gr_exp26_errtot3026","Balloon (1966/07)",100,0.108,1.814);
   Graph_gr_exp26_errtot3026->SetMinimum(325.75);
   Graph_gr_exp26_errtot3026->SetMaximum(1690.75);
   Graph_gr_exp26_errtot3026->SetDirectory(nullptr);
   Graph_gr_exp26_errtot3026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp26_errtot3026->SetLineColor(ci);
   Graph_gr_exp26_errtot3026->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp26_errtot3026->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp26_errtot3026->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp26_errtot3026->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp26_errtot3026->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp26_errtot3026->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp26_errtot3026->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp26_errtot3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp26_errtot3026);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp27_errtot_fx3027[9] = { 0.114, 0.22, 0.2, 0.178, 0.156, 0.135, 0.09, 0.071, 0.066 };
   Double_t gr_exp27_errtot_fy3027[9] = { 881, 1013, 1040, 1001, 936, 936, 788, 473, 372 };
   Double_t gr_exp27_errtot_felx3027[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp27_errtot_fely3027[9] = { 60, 50, 80, 70, 70, 70, 60, 40, 40 };
   Double_t gr_exp27_errtot_fehx3027[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp27_errtot_fehy3027[9] = { 60, 140, 80, 70, 70, 70, 60, 40, 40 };
   grae = new TGraphAsymmErrors(9,gr_exp27_errtot_fx3027,gr_exp27_errtot_fy3027,gr_exp27_errtot_felx3027,gr_exp27_errtot_fehx3027,gr_exp27_errtot_fely3027,gr_exp27_errtot_fehy3027);
   grae->SetName("gr_exp27_errtot");
   grae->SetTitle("Balloon (1966/07+1966/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0033ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0033ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp27_errtot3027 = new TH1F("Graph_gr_exp27_errtot3027","Balloon (1966/07+1966/08)",100,0.0506,0.2354);
   Graph_gr_exp27_errtot3027->SetMinimum(249.9);
   Graph_gr_exp27_errtot3027->SetMaximum(1235.1);
   Graph_gr_exp27_errtot3027->SetDirectory(nullptr);
   Graph_gr_exp27_errtot3027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp27_errtot3027->SetLineColor(ci);
   Graph_gr_exp27_errtot3027->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp27_errtot3027->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp27_errtot3027->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp27_errtot3027->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp27_errtot3027->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp27_errtot3027->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp27_errtot3027->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp27_errtot3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp27_errtot3027);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp28_errtot_fx3028[7] = { 0.146, 0.439, 0.253, 0.226, 0.175, 0.202, 0.108 };
   Double_t gr_exp28_errtot_fy3028[7] = { 1310, 1280, 2200, 1840, 1640, 2140, 880 };
   Double_t gr_exp28_errtot_felx3028[7] = { 0.012, 0.173, 0.013, 0.013, 0.015, 0.01, 0.015 };
   Double_t gr_exp28_errtot_fely3028[7] = { 200, 120, 270, 300, 260, 310, 160 };
   Double_t gr_exp28_errtot_fehx3028[7] = { 0.014, 0.287, 0.013, 0.014, 0.017, 0.011, 0.019 };
   Double_t gr_exp28_errtot_fehy3028[7] = { 200, 120, 270, 300, 260, 310, 160 };
   grae = new TGraphAsymmErrors(7,gr_exp28_errtot_fx3028,gr_exp28_errtot_fy3028,gr_exp28_errtot_felx3028,gr_exp28_errtot_fehx3028,gr_exp28_errtot_fely3028,gr_exp28_errtot_fehy3028);
   grae->SetName("gr_exp28_errtot");
   grae->SetTitle("Balloon (1966/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cccc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cccc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp28_errtot3028 = new TH1F("Graph_gr_exp28_errtot3028","Balloon (1966/08)",100,0.0297,0.7893);
   Graph_gr_exp28_errtot3028->SetMinimum(545);
   Graph_gr_exp28_errtot3028->SetMaximum(2645);
   Graph_gr_exp28_errtot3028->SetDirectory(nullptr);
   Graph_gr_exp28_errtot3028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp28_errtot3028->SetLineColor(ci);
   Graph_gr_exp28_errtot3028->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp28_errtot3028->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp28_errtot3028->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp28_errtot3028->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp28_errtot3028->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp28_errtot3028->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp28_errtot3028->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp28_errtot3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp28_errtot3028);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp29_errtot_fx3029[11] = { 0.3, 1.57, 0.99, 0.69, 0.52, 0.39, 0.22, 0.17, 0.14, 0.12, 0.1 };
   Double_t gr_exp29_errtot_fy3029[11] = { 1482, 467, 876, 1185, 1385, 1494, 1240, 1038, 1032, 866, 707 };
   Double_t gr_exp29_errtot_felx3029[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp29_errtot_fely3029[11] = { 63.2, 21.4, 40.1, 43.2, 72.1, 82.4, 116, 104, 100, 81.1, 73.1 };
   Double_t gr_exp29_errtot_fehx3029[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp29_errtot_fehy3029[11] = { 63.2, 21.4, 40.1, 43.2, 72.1, 82.4, 116, 104, 100, 81.1, 73.1 };
   grae = new TGraphAsymmErrors(11,gr_exp29_errtot_fx3029,gr_exp29_errtot_fy3029,gr_exp29_errtot_felx3029,gr_exp29_errtot_fehx3029,gr_exp29_errtot_fely3029,gr_exp29_errtot_fehy3029);
   grae->SetName("gr_exp29_errtot");
   grae->SetTitle("Balloon (1967/06)");
   grae->SetFillStyle(0);
   grae->SetMarkerStyle(29);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp29_errtot3029 = new TH1F("Graph_gr_exp29_errtot3029","Balloon (1967/06)",100,0.09,1.717);
   Graph_gr_exp29_errtot3029->SetMinimum(332.52);
   Graph_gr_exp29_errtot3029->SetMaximum(1689.48);
   Graph_gr_exp29_errtot3029->SetDirectory(nullptr);
   Graph_gr_exp29_errtot3029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp29_errtot3029->SetLineColor(ci);
   Graph_gr_exp29_errtot3029->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp29_errtot3029->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp29_errtot3029->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp29_errtot3029->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp29_errtot3029->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp29_errtot3029->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp29_errtot3029->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp29_errtot3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp29_errtot3029);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp30_errtot_fx3030[7] = { 0.439, 0.251, 0.225, 0.201, 0.145, 0.106, 0.174 };
   Double_t gr_exp30_errtot_fy3030[7] = { 920, 1310, 1100, 1070, 800, 520, 830 };
   Double_t gr_exp30_errtot_felx3030[7] = { 0.174, 0.013, 0.013, 0.011, 0.013, 0.016, 0.015 };
   Double_t gr_exp30_errtot_fely3030[7] = { 70, 80, 80, 80, 60, 60, 70 };
   Double_t gr_exp30_errtot_fehx3030[7] = { 0.287, 0.014, 0.013, 0.011, 0.014, 0.019, 0.016 };
   Double_t gr_exp30_errtot_fehy3030[7] = { 70, 80, 80, 80, 60, 60, 70 };
   grae = new TGraphAsymmErrors(7,gr_exp30_errtot_fx3030,gr_exp30_errtot_fy3030,gr_exp30_errtot_felx3030,gr_exp30_errtot_fehx3030,gr_exp30_errtot_fely3030,gr_exp30_errtot_fehy3030);
   grae->SetName("gr_exp30_errtot");
   grae->SetTitle("Balloon (1967/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp30_errtot3030 = new TH1F("Graph_gr_exp30_errtot3030","Balloon (1967/07)",100,0.0264,0.7896);
   Graph_gr_exp30_errtot3030->SetMinimum(367);
   Graph_gr_exp30_errtot3030->SetMaximum(1483);
   Graph_gr_exp30_errtot3030->SetDirectory(nullptr);
   Graph_gr_exp30_errtot3030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp30_errtot3030->SetLineColor(ci);
   Graph_gr_exp30_errtot3030->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp30_errtot3030->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp30_errtot3030->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp30_errtot3030->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp30_errtot3030->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp30_errtot3030->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp30_errtot3030->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp30_errtot3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp30_errtot3030);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp31_errtot_fx3031[5] = { 0.084, 0.113, 0.149, 0.206, 0.285 };
   Double_t gr_exp31_errtot_fy3031[5] = { 283.6, 426.6, 561.2, 588.1, 753.3 };
   Double_t gr_exp31_errtot_felx3031[5] = { 0.018, 0.02, 0.026, 0.033, 0.043 };
   Double_t gr_exp31_errtot_fely3031[5] = { 74.8, 87.8, 80.3, 75.2, 113 };
   Double_t gr_exp31_errtot_fehx3031[5] = { 0.009, 0.01, 0.024, 0.036, 0.044 };
   Double_t gr_exp31_errtot_fehy3031[5] = { 74.8, 87.8, 80.3, 75.2, 113 };
   grae = new TGraphAsymmErrors(5,gr_exp31_errtot_fx3031,gr_exp31_errtot_fy3031,gr_exp31_errtot_felx3031,gr_exp31_errtot_fehx3031,gr_exp31_errtot_fely3031,gr_exp31_errtot_fehy3031);
   grae->SetName("gr_exp31_errtot");
   grae->SetTitle("Balloon (1968/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(34);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp31_errtot3031 = new TH1F("Graph_gr_exp31_errtot3031","Balloon (1968/06)",100,0.0397,0.3553);
   Graph_gr_exp31_errtot3031->SetMinimum(143.05);
   Graph_gr_exp31_errtot3031->SetMaximum(932.05);
   Graph_gr_exp31_errtot3031->SetDirectory(nullptr);
   Graph_gr_exp31_errtot3031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp31_errtot3031->SetLineColor(ci);
   Graph_gr_exp31_errtot3031->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp31_errtot3031->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp31_errtot3031->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp31_errtot3031->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp31_errtot3031->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp31_errtot3031->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp31_errtot3031->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp31_errtot3031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp31_errtot3031);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp32_errtot_fx3032[7] = { 0.198, 0.436, 0.249, 0.222, 0.17, 0.141, 0.101 };
   Double_t gr_exp32_errtot_fy3032[7] = { 890, 720, 960, 910, 820, 550, 510 };
   Double_t gr_exp32_errtot_felx3032[7] = { 0.011, 0.174, 0.013, 0.013, 0.015, 0.013, 0.016 };
   Double_t gr_exp32_errtot_fely3032[7] = { 60, 70, 60, 60, 60, 40, 40 };
   Double_t gr_exp32_errtot_fehx3032[7] = { 0.011, 0.288, 0.013, 0.014, 0.017, 0.014, 0.019 };
   Double_t gr_exp32_errtot_fehy3032[7] = { 60, 70, 60, 60, 60, 40, 40 };
   grae = new TGraphAsymmErrors(7,gr_exp32_errtot_fx3032,gr_exp32_errtot_fy3032,gr_exp32_errtot_felx3032,gr_exp32_errtot_fehx3032,gr_exp32_errtot_fely3032,gr_exp32_errtot_fehy3032);
   grae->SetName("gr_exp32_errtot");
   grae->SetTitle("Balloon (1968/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp32_errtot3032 = new TH1F("Graph_gr_exp32_errtot3032","Balloon (1968/07)",100,0.0211,0.7879);
   Graph_gr_exp32_errtot3032->SetMinimum(415);
   Graph_gr_exp32_errtot3032->SetMaximum(1075);
   Graph_gr_exp32_errtot3032->SetDirectory(nullptr);
   Graph_gr_exp32_errtot3032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp32_errtot3032->SetLineColor(ci);
   Graph_gr_exp32_errtot3032->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp32_errtot3032->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp32_errtot3032->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp32_errtot3032->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp32_errtot3032->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp32_errtot3032->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp32_errtot3032->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp32_errtot3032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp32_errtot3032);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp33_errtot_fx3033[10] = { 0.276, 0.013, 0.017, 0.021, 0.03, 0.041, 0.062, 0.095, 0.135, 0.198 };
   Double_t gr_exp33_errtot_fy3033[10] = { 283.6, 337.5, 233.6, 182.3, 91.56, 101.2, 145.2, 193.7, 221.4, 253.1 };
   Double_t gr_exp33_errtot_felx3033[10] = { 0.042, 0.002, 0.003, 0.003, 0.005, 0.006, 0.015, 0.017, 0.024, 0.04 };
   Double_t gr_exp33_errtot_fely3033[10] = { 38.4, 66.8, 61.6, 33.2, 21.1, 22.5, 20.8, 26.2, 21.7, 28.6 };
   Double_t gr_exp33_errtot_fehx3033[10] = { 0.044, 0.001, 0.001, 0.004, 0.005, 0.006, 0.016, 0.016, 0.023, 0.036 };
   Double_t gr_exp33_errtot_fehy3033[10] = { 38.4, 66.8, 61.6, 33.2, 21.1, 22.5, 20.8, 26.2, 21.7, 28.6 };
   grae = new TGraphAsymmErrors(10,gr_exp33_errtot_fx3033,gr_exp33_errtot_fy3033,gr_exp33_errtot_felx3033,gr_exp33_errtot_fehx3033,gr_exp33_errtot_fely3033,gr_exp33_errtot_fehy3033);
   grae->SetName("gr_exp33_errtot");
   grae->SetTitle("Balloon (1969/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(5);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp33_errtot3033 = new TH1F("Graph_gr_exp33_errtot3033","Balloon (1969/06)",100,0.0099,0.3509);
   Graph_gr_exp33_errtot3033->SetMinimum(37.076);
   Graph_gr_exp33_errtot3033->SetMaximum(437.684);
   Graph_gr_exp33_errtot3033->SetDirectory(nullptr);
   Graph_gr_exp33_errtot3033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp33_errtot3033->SetLineColor(ci);
   Graph_gr_exp33_errtot3033->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp33_errtot3033->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp33_errtot3033->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp33_errtot3033->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp33_errtot3033->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp33_errtot3033->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp33_errtot3033->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp33_errtot3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp33_errtot3033);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp34_errtot_fx3034[7] = { 0.444, 0.257, 0.231, 0.207, 0.181, 0.153, 0.116 };
   Double_t gr_exp34_errtot_fy3034[7] = { 480, 570, 650, 570, 400, 370, 230 };
   Double_t gr_exp34_errtot_felx3034[7] = { 0.174, 0.012, 0.013, 0.01, 0.014, 0.012, 0.015 };
   Double_t gr_exp34_errtot_fely3034[7] = { 50, 40, 50, 40, 40, 40, 40 };
   Double_t gr_exp34_errtot_fehx3034[7] = { 0.285, 0.013, 0.014, 0.011, 0.016, 0.014, 0.018 };
   Double_t gr_exp34_errtot_fehy3034[7] = { 50, 40, 50, 40, 40, 40, 40 };
   grae = new TGraphAsymmErrors(7,gr_exp34_errtot_fx3034,gr_exp34_errtot_fy3034,gr_exp34_errtot_felx3034,gr_exp34_errtot_fehx3034,gr_exp34_errtot_fely3034,gr_exp34_errtot_fehy3034);
   grae->SetName("gr_exp34_errtot");
   grae->SetTitle("Balloon (1969/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cc00ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cc00ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp34_errtot3034 = new TH1F("Graph_gr_exp34_errtot3034","Balloon (1969/07)",100,0.0382,0.7918);
   Graph_gr_exp34_errtot3034->SetMinimum(139);
   Graph_gr_exp34_errtot3034->SetMaximum(751);
   Graph_gr_exp34_errtot3034->SetDirectory(nullptr);
   Graph_gr_exp34_errtot3034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp34_errtot3034->SetLineColor(ci);
   Graph_gr_exp34_errtot3034->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp34_errtot3034->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp34_errtot3034->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp34_errtot3034->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp34_errtot3034->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp34_errtot3034->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp34_errtot3034->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp34_errtot3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp34_errtot3034);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp35_errtot_fx3035[8] = { 0.06, 0.274, 0.194, 0.133, 0.094, 0.021, 0.03, 0.04 };
   Double_t gr_exp35_errtot_fy3035[8] = { 149.2, 243.1, 211.3, 201.6, 208.5, 177.5, 111.9, 102.5 };
   Double_t gr_exp35_errtot_felx3035[8] = { 0.015, 0.044, 0.04, 0.022, 0.017, 0.003, 0.006, 0.006 };
   Double_t gr_exp35_errtot_fely3035[8] = { 33.1, 48.1, 35.1, 38.3, 44.6, 57.6, 42.3, 31.4 };
   Double_t gr_exp35_errtot_fehx3035[8] = { 0.017, 0.037, 0.036, 0.021, 0.017, 0.003, 0.004, 0.005 };
   Double_t gr_exp35_errtot_fehy3035[8] = { 33.1, 48.1, 35.1, 38.3, 44.6, 57.6, 42.3, 31.4 };
   grae = new TGraphAsymmErrors(8,gr_exp35_errtot_fx3035,gr_exp35_errtot_fy3035,gr_exp35_errtot_felx3035,gr_exp35_errtot_fehx3035,gr_exp35_errtot_fely3035,gr_exp35_errtot_fehy3035);
   grae->SetName("gr_exp35_errtot");
   grae->SetTitle("Balloon (1970/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff66ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff66ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp35_errtot3035 = new TH1F("Graph_gr_exp35_errtot3035","Balloon (1970/06)",100,0.0162,0.3403);
   Graph_gr_exp35_errtot3035->SetMinimum(47.44);
   Graph_gr_exp35_errtot3035->SetMaximum(313.36);
   Graph_gr_exp35_errtot3035->SetDirectory(nullptr);
   Graph_gr_exp35_errtot3035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp35_errtot3035->SetLineColor(ci);
   Graph_gr_exp35_errtot3035->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp35_errtot3035->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp35_errtot3035->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp35_errtot3035->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp35_errtot3035->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp35_errtot3035->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp35_errtot3035->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp35_errtot3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp35_errtot3035);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp36_errtot_fx3036[7] = { 0.106, 0.145, 0.174, 0.201, 0.225, 0.251, 0.439 };
   Double_t gr_exp36_errtot_fy3036[7] = { 170, 230, 350, 320, 390, 320, 340 };
   Double_t gr_exp36_errtot_felx3036[7] = { 0.016, 0.013, 0.015, 0.011, 0.013, 0.013, 0.174 };
   Double_t gr_exp36_errtot_fely3036[7] = { 40, 40, 40, 50, 50, 50, 70 };
   Double_t gr_exp36_errtot_fehx3036[7] = { 0.019, 0.014, 0.016, 0.011, 0.013, 0.014, 0.287 };
   Double_t gr_exp36_errtot_fehy3036[7] = { 40, 40, 40, 50, 50, 50, 70 };
   grae = new TGraphAsymmErrors(7,gr_exp36_errtot_fx3036,gr_exp36_errtot_fy3036,gr_exp36_errtot_felx3036,gr_exp36_errtot_fehx3036,gr_exp36_errtot_fely3036,gr_exp36_errtot_fehy3036);
   grae->SetName("gr_exp36_errtot");
   grae->SetTitle("Balloon (1970/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#999999");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(26);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp36_errtot3036 = new TH1F("Graph_gr_exp36_errtot3036","Balloon (1970/07)",100,0.0264,0.7896);
   Graph_gr_exp36_errtot3036->SetMinimum(99);
   Graph_gr_exp36_errtot3036->SetMaximum(471);
   Graph_gr_exp36_errtot3036->SetDirectory(nullptr);
   Graph_gr_exp36_errtot3036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp36_errtot3036->SetLineColor(ci);
   Graph_gr_exp36_errtot3036->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp36_errtot3036->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp36_errtot3036->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp36_errtot3036->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp36_errtot3036->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp36_errtot3036->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp36_errtot3036->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp36_errtot3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp36_errtot3036);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp37_errtot_fx3037[9] = { 2000, 1250, 800, 500, 325, 130, 80, 50, 200 };
   Double_t gr_exp37_errtot_fy3037[9] = { 1.37e-05, 4.994e-05, 0.0002127, 0.0005984, 0.002219, 0.02568, 0.102, 0.324, 0.007951 };
   Double_t gr_exp37_errtot_felx3037[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp37_errtot_fely3037[9] = { 5.987702e-06, 1.976013e-05, 4.847421e-05, 0.0001422781, 0.0005275391, 0.006391911, 0.02425478, 0.08064143, 0.001890296 };
   Double_t gr_exp37_errtot_fehx3037[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp37_errtot_fehy3037[9] = { 5.987702e-06, 1.976013e-05, 4.847421e-05, 0.0001422781, 0.0005275391, 0.006391911, 0.02425478, 0.08064143, 0.001890296 };
   grae = new TGraphAsymmErrors(9,gr_exp37_errtot_fx3037,gr_exp37_errtot_fy3037,gr_exp37_errtot_felx3037,gr_exp37_errtot_fehx3037,gr_exp37_errtot_fely3037,gr_exp37_errtot_fehy3037);
   grae->SetName("gr_exp37_errtot");
   grae->SetTitle("Balloon (1970/11)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#990000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#990000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(32);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp37_errtot3037 = new TH1F("Graph_gr_exp37_errtot3037","Balloon (1970/11)",100,45,2195);
   Graph_gr_exp37_errtot3037->SetMinimum(6.941068e-06);
   Graph_gr_exp37_errtot3037->SetMaximum(0.4451048);
   Graph_gr_exp37_errtot3037->SetDirectory(nullptr);
   Graph_gr_exp37_errtot3037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp37_errtot3037->SetLineColor(ci);
   Graph_gr_exp37_errtot3037->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp37_errtot3037->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp37_errtot3037->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp37_errtot3037->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp37_errtot3037->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp37_errtot3037->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp37_errtot3037->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp37_errtot3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp37_errtot3037);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp38_errtot_fx3038[7] = { 0.108, 0.146, 0.175, 0.201, 0.225, 0.252, 0.439 };
   Double_t gr_exp38_errtot_fy3038[7] = { 440, 610, 680, 800, 860, 1020, 830 };
   Double_t gr_exp38_errtot_felx3038[7] = { 0.016, 0.013, 0.015, 0.01, 0.013, 0.013, 0.174 };
   Double_t gr_exp38_errtot_fely3038[7] = { 70, 80, 70, 90, 90, 90, 60 };
   Double_t gr_exp38_errtot_fehx3038[7] = { 0.018, 0.014, 0.016, 0.011, 0.014, 0.013, 0.287 };
   Double_t gr_exp38_errtot_fehy3038[7] = { 70, 80, 70, 90, 90, 90, 60 };
   grae = new TGraphAsymmErrors(7,gr_exp38_errtot_fx3038,gr_exp38_errtot_fy3038,gr_exp38_errtot_felx3038,gr_exp38_errtot_fehx3038,gr_exp38_errtot_fely3038,gr_exp38_errtot_fehy3038);
   grae->SetName("gr_exp38_errtot");
   grae->SetTitle("Balloon (1971/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cccc");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(30);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp38_errtot3038 = new TH1F("Graph_gr_exp38_errtot3038","Balloon (1971/07)",100,0.0286,0.7894);
   Graph_gr_exp38_errtot3038->SetMinimum(296);
   Graph_gr_exp38_errtot3038->SetMaximum(1184);
   Graph_gr_exp38_errtot3038->SetDirectory(nullptr);
   Graph_gr_exp38_errtot3038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp38_errtot3038->SetLineColor(ci);
   Graph_gr_exp38_errtot3038->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp38_errtot3038->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp38_errtot3038->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp38_errtot3038->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp38_errtot3038->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp38_errtot3038->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp38_errtot3038->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp38_errtot3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp38_errtot3038);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp39_errtot_fx3039[7] = { 0.443, 0.257, 0.231, 0.208, 0.153, 0.117, 0.182 };
   Double_t gr_exp39_errtot_fy3039[7] = { 1580, 1770, 1840, 1870, 1430, 1340, 1980 };
   Double_t gr_exp39_errtot_felx3039[7] = { 0.173, 0.013, 0.013, 0.01, 0.012, 0.015, 0.015 };
   Double_t gr_exp39_errtot_fely3039[7] = { 160, 120, 140, 160, 140, 130, 140 };
   Double_t gr_exp39_errtot_fehx3039[7] = { 0.285, 0.013, 0.013, 0.01, 0.014, 0.017, 0.016 };
   Double_t gr_exp39_errtot_fehy3039[7] = { 160, 120, 140, 160, 140, 130, 140 };
   grae = new TGraphAsymmErrors(7,gr_exp39_errtot_fx3039,gr_exp39_errtot_fy3039,gr_exp39_errtot_felx3039,gr_exp39_errtot_fehx3039,gr_exp39_errtot_fely3039,gr_exp39_errtot_fehy3039);
   grae->SetName("gr_exp39_errtot");
   grae->SetTitle("Balloon (1972/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#33ff00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#33ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(28);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp39_errtot3039 = new TH1F("Graph_gr_exp39_errtot3039","Balloon (1972/07)",100,0.0394,0.7906);
   Graph_gr_exp39_errtot3039->SetMinimum(1119);
   Graph_gr_exp39_errtot3039->SetMaximum(2211);
   Graph_gr_exp39_errtot3039->SetDirectory(nullptr);
   Graph_gr_exp39_errtot3039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp39_errtot3039->SetLineColor(ci);
   Graph_gr_exp39_errtot3039->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp39_errtot3039->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp39_errtot3039->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp39_errtot3039->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp39_errtot3039->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp39_errtot3039->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp39_errtot3039->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp39_errtot3039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp39_errtot3039);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp40_errtot_fx3040[8] = { 50500, 109000, 37600, 24600, 17700, 14000, 11100, 8850 };
   Double_t gr_exp40_errtot_fy3040[8] = { 1.03e-09, 1.18e-10, 4.54e-09, 2.36e-08, 3.34e-08, 8.84e-08, 1.65e-07, 3.18e-07 };
   Double_t gr_exp40_errtot_felx3040[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp40_errtot_fely3040[8] = { 6.72e-10, 8.18e-11, 2.23e-09, 7.95e-09, 1.2e-08, 6.8e-09, 3.38e-08, 5.01e-08 };
   Double_t gr_exp40_errtot_fehx3040[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp40_errtot_fehy3040[8] = { 7.76e-10, 1.16e-10, 1.93e-09, 8.16e-09, 1.16e-08, 1.65e-08, 2.65e-08, 6.83e-08 };
   grae = new TGraphAsymmErrors(8,gr_exp40_errtot_fx3040,gr_exp40_errtot_fy3040,gr_exp40_errtot_felx3040,gr_exp40_errtot_fehx3040,gr_exp40_errtot_fely3040,gr_exp40_errtot_fehy3040);
   grae->SetName("gr_exp40_errtot");
   grae->SetTitle("Balloon (1987/05+1988/05+1989/05+1991/05)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff6699");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff6699");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(27);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp40_errtot3040 = new TH1F("Graph_gr_exp40_errtot3040","Balloon (1987/05+1988/05+1989/05+1991/05)",100,7965,119015);
   Graph_gr_exp40_errtot3040->SetMinimum(3.258e-11);
   Graph_gr_exp40_errtot3040->SetMaximum(4.249264e-07);
   Graph_gr_exp40_errtot3040->SetDirectory(nullptr);
   Graph_gr_exp40_errtot3040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp40_errtot3040->SetLineColor(ci);
   Graph_gr_exp40_errtot3040->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp40_errtot3040->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp40_errtot3040->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp40_errtot3040->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp40_errtot3040->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp40_errtot3040->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp40_errtot3040->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp40_errtot3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp40_errtot3040);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp41_errtot_fx3041[19] = { 6.5, 52.1, 40.7, 35.74501, 74.1, 28.3, 21.5, 19.04468, 17.7, 14.3, 10.8, 9.58, 8.57, 7.74, 7.11, 6.03, 5.61,
   5.01, 12.3 };
   Double_t gr_exp41_errtot_fy3041[19] = { 76.1, 0.433, 0.809, 0.9999, 0.16, 2.08, 4.31, 3.99158, 7.06, 12.1, 24.8, 32.2, 40.6, 51.3, 64.8, 85.9, 96.4,
   112, 17.5 };
   Double_t gr_exp41_errtot_felx3041[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0 };
   Double_t gr_exp41_errtot_fely3041[19] = { 9.520005, 0.06046263, 0.1179256, 0.1755969, 0.02334524, 0.3078847, 0.5853008, 0.6566162, 0.8599517, 1.492055, 2.908745, 4.028002, 4.881363, 6.094342, 8.215406, 9.835253, 12.22005,
   13.47368, 2.051195 };
   Double_t gr_exp41_errtot_fehx3041[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0 };
   Double_t gr_exp41_errtot_fehy3041[19] = { 9.520005, 0.06046263, 0.1179256, 0.1755969, 0.02334524, 0.3078847, 0.5853008, 0.6566162, 0.8599517, 1.492055, 2.908745, 4.028002, 4.881363, 6.094342, 8.215406, 9.835253, 12.22005,
   13.47368, 2.051195 };
   grae = new TGraphAsymmErrors(19,gr_exp41_errtot_fx3041,gr_exp41_errtot_fy3041,gr_exp41_errtot_felx3041,gr_exp41_errtot_fehx3041,gr_exp41_errtot_fely3041,gr_exp41_errtot_fehy3041);
   grae->SetName("gr_exp41_errtot");
   grae->SetTitle("BalloonNMSU (1976/05)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0033ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0033ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp41_errtot3041 = new TH1F("Graph_gr_exp41_errtot3041","BalloonNMSU (1976/05)",100,4.509,81.009);
   Graph_gr_exp41_errtot3041->SetMinimum(0.1229893);
   Graph_gr_exp41_errtot3041->SetMaximum(138.0074);
   Graph_gr_exp41_errtot3041->SetDirectory(nullptr);
   Graph_gr_exp41_errtot3041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp41_errtot3041->SetLineColor(ci);
   Graph_gr_exp41_errtot3041->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp41_errtot3041->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp41_errtot3041->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp41_errtot3041->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp41_errtot3041->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp41_errtot3041->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp41_errtot3041->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp41_errtot3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp41_errtot3041);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp42_errtot_fx3042[22] = { 18.52501, 25.4, 20.2, 21.25493, 22.7, 29.7, 35.3, 43.4, 57.4, 75.38508, 147, 14.5, 12.2, 10.6, 9.6, 8.57, 7.76,
   7.11, 6.48, 6.01, 5.6, 17.3 };
   Double_t gr_exp42_errtot_fy3042[22] = { 5.38673, 2.75, 4.93, 3.16976, 3.51, 1.91, 1.25, 0.744, 0.346, 0.176485, 0.0293, 11.2, 17.2, 24.5, 29.7, 37.6, 45,
   55, 66.8, 78.6, 78.7, 7.38 };
   Double_t gr_exp42_errtot_felx3042[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t gr_exp42_errtot_fely3042[22] = { 0.5831779, 0.3348223, 0.6005814, 0.4278629, 0.4332632, 0.2392008, 0.1691774, 0.09691114, 0.04566399, 0.03295359, 0.004094447, 1.345703, 2.180367, 3.374152, 3.927569, 5.035881, 5.278977,
   6.529962, 8.133388, 9.834007, 9.842002, 0.8993553 };
   Double_t gr_exp42_errtot_fehx3042[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t gr_exp42_errtot_fehy3042[22] = { 0.5831779, 0.3348223, 0.6005814, 0.4278629, 0.4332632, 0.2392008, 0.1691774, 0.09691114, 0.04566399, 0.03295359, 0.004094447, 1.345703, 2.180367, 3.374152, 3.927569, 5.035881, 5.278977,
   6.529962, 8.133388, 9.834007, 9.842002, 0.8993553 };
   grae = new TGraphAsymmErrors(22,gr_exp42_errtot_fx3042,gr_exp42_errtot_fy3042,gr_exp42_errtot_felx3042,gr_exp42_errtot_fehx3042,gr_exp42_errtot_fely3042,gr_exp42_errtot_fehy3042);
   grae->SetName("gr_exp42_errtot");
   grae->SetTitle("BalloonNMSU (1979/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cccc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cccc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp42_errtot3042 = new TH1F("Graph_gr_exp42_errtot3042","BalloonNMSU (1979/06)",100,5.04,161.14);
   Graph_gr_exp42_errtot3042->SetMinimum(0.022685);
   Graph_gr_exp42_errtot3042->SetMaximum(97.39368);
   Graph_gr_exp42_errtot3042->SetDirectory(nullptr);
   Graph_gr_exp42_errtot3042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp42_errtot3042->SetLineColor(ci);
   Graph_gr_exp42_errtot3042->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp42_errtot3042->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp42_errtot3042->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp42_errtot3042->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp42_errtot3042->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp42_errtot3042->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp42_errtot3042->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp42_errtot3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp42_errtot3042);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp43_errtot_fx3043[5] = { 0.178885, 0.223159, 0.149666, 0.11726, 0.132288 };
   Double_t gr_exp43_errtot_fy3043[5] = { 1980, 2280, 1720, 1410, 1580 };
   Double_t gr_exp43_errtot_felx3043[5] = { 0.018885, 0.023159, 0.009666, 0.00726, 0.007288 };
   Double_t gr_exp43_errtot_fely3043[5] = { 130, 120, 120, 90, 100 };
   Double_t gr_exp43_errtot_fehx3043[5] = { 0.021115, 0.025841, 0.010334, 0.00774, 0.007712 };
   Double_t gr_exp43_errtot_fehy3043[5] = { 130, 120, 120, 90, 100 };
   grae = new TGraphAsymmErrors(5,gr_exp43_errtot_fx3043,gr_exp43_errtot_fy3043,gr_exp43_errtot_felx3043,gr_exp43_errtot_fehx3043,gr_exp43_errtot_fely3043,gr_exp43_errtot_fehy3043);
   grae->SetName("gr_exp43_errtot");
   grae->SetTitle("BalloonUNH (1977/07)");
   grae->SetFillStyle(0);
   grae->SetMarkerStyle(22);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp43_errtot3043 = new TH1F("Graph_gr_exp43_errtot3043","BalloonUNH (1977/07)",100,0.0961,0.2629);
   Graph_gr_exp43_errtot3043->SetMinimum(1212);
   Graph_gr_exp43_errtot3043->SetMaximum(2508);
   Graph_gr_exp43_errtot3043->SetDirectory(nullptr);
   Graph_gr_exp43_errtot3043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp43_errtot3043->SetLineColor(ci);
   Graph_gr_exp43_errtot3043->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp43_errtot3043->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp43_errtot3043->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp43_errtot3043->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp43_errtot3043->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp43_errtot3043->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp43_errtot3043->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp43_errtot3043->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp43_errtot3043);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp44_errtot_fx3044[29] = { 1780, 2240, 2820, 3550, 4470, 5620, 7080, 8910, 11200, 14100, 17800, 22400, 31600, 50100, 56.2, 1120, 1410,
   70.8, 89.1, 112, 141, 178, 224, 355, 447, 562, 708, 891, 282 };
   Double_t gr_exp44_errtot_fy3044[29] = { 1.73e-05, 9.74e-06, 5.37e-06, 2.96e-06, 1.63e-06, 9.03e-07, 5.09e-07, 2.81e-07, 1.48e-07, 7.61e-08, 3.8e-08, 1.94e-08, 7.51e-09, 2.01e-09, 0.218, 5.64e-05, 3.09e-05,
   0.116, 0.0606, 0.0315, 0.0163, 0.00856, 0.00446, 0.00125, 0.000659, 0.000351, 0.000191, 0.000104, 0.00235 };
   Double_t gr_exp44_errtot_felx3044[29] = { 190, 240, 310, 390, 490, 610, 770, 970, 1200, 1500, 1900, 2400, 6500, 10300, 6.1, 120, 150,
   7.7, 9.7, 12, 15, 19, 24, 39, 49, 61, 77, 97, 31 };
   Double_t gr_exp44_errtot_fely3044[29] = { 1.236285e-06, 6.651346e-07, 3.526769e-07, 1.935355e-07, 1.101635e-07, 6.985478e-08, 4.474651e-08, 2.827083e-08, 1.550774e-08, 7.969448e-09, 4.125542e-09, 2.65e-09, 1.410319e-09, 6.055873e-10, 0.01353699, 4.751842e-06, 2.334524e-06,
   0.00787376, 0.004170084, 0.002319483, 0.001236285, 0.0006216912, 0.00031822, 0.0001214125, 6.09275e-05, 3.155456e-05, 1.711724e-05, 8.995755e-06, 0.0001714526 };
   Double_t gr_exp44_errtot_fehx3044[29] = { 220, 270, 340, 430, 540, 690, 860, 1090, 1400, 1800, 2200, 2700, 8200, 13000, 6.9, 140, 180,
   8.6, 10.9, 14, 18, 22, 27, 43, 54, 69, 86, 109, 34 };
   Double_t gr_exp44_errtot_fehy3044[29] = { 1.236285e-06, 6.963476e-07, 4.226926e-07, 2.493271e-07, 1.598405e-07, 1.043456e-07, 6.41464e-08, 3.720497e-08, 1.897367e-08, 9.387699e-09, 4.27889e-09, 2.202272e-09, 1.010319e-09, 4.73354e-10, 0.01353699, 4.08049e-06, 2.334524e-06,
   0.00787376, 0.004408446, 0.002488152, 0.001315295, 0.000662951, 0.0003337304, 7.140371e-05, 3.765953e-05, 2.02e-05, 1.216553e-05, 6.477654e-06, 0.0001791201 };
   grae = new TGraphAsymmErrors(29,gr_exp44_errtot_fx3044,gr_exp44_errtot_fy3044,gr_exp44_errtot_felx3044,gr_exp44_errtot_fehx3044,gr_exp44_errtot_fely3044,gr_exp44_errtot_fehy3044);
   grae->SetName("gr_exp44_errtot");
   grae->SetTitle("CALET (2015/10-2021/12)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp44_errtot3044 = new TH1F("Graph_gr_exp44_errtot3044","CALET (2015/10-2021/12)",100,45.09,69404.99);
   Graph_gr_exp44_errtot3044->SetMinimum(1.263971e-09);
   Graph_gr_exp44_errtot3044->SetMaximum(0.2546907);
   Graph_gr_exp44_errtot3044->SetDirectory(nullptr);
   Graph_gr_exp44_errtot3044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp44_errtot3044->SetLineColor(ci);
   Graph_gr_exp44_errtot3044->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp44_errtot3044->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp44_errtot3044->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp44_errtot3044->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp44_errtot3044->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp44_errtot3044->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp44_errtot3044->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp44_errtot3044->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp44_errtot3044);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp45_errtot_fx3045[29] = { 5.59, 11, 6.73, 8.38, 15.6, 20.7, 23.9, 28.1, 34.1, 43.2, 58.8, 80, 105.4, 154.3, 4.11, 0.21, 0.3,
   0.42, 0.55, 0.7, 0.95, 1.29, 2.03, 2.41, 2.8, 1.66, 3.19, 3.6, 4.75 };
   Double_t gr_exp45_errtot_fy3045[29] = { 68.6, 14.5, 46.4, 27.8, 5.82, 2.82, 1.88, 1.13, 0.76, 0.406, 0.157, 0.0721, 0.028, 0.0115, 128, 1250, 1420,
   1440, 1350, 1220, 1010, 756, 428, 327, 258, 561, 209, 164, 96.6 };
   Double_t gr_exp45_errtot_felx3045[29] = { 0.46, 1.5, 0.63, 0.92, 2.8, 1.3, 1.7, 2.3, 3.3, 5.1, 9.1, 8.7, 14.6, 29.5, 0.27, 0.06, 0.07,
   0.09, 0.08, 0.08, 0.17, 0.17, 0.18, 0.18, 0.19, 0.18, 0.19, 0.21, 0.35 };
   Double_t gr_exp45_errtot_fely3045[29] = { 0.7, 0.2, 0.5, 0.3, 0.08, 0.08, 0.06, 0.04, 0.025, 0.015, 0.007, 0.0049, 0.0023, 0.0011, 1, 20, 20,
   10, 10, 10, 10, 5, 3, 3, 2, 4, 2, 2, 1 };
   Double_t gr_exp45_errtot_fehx3045[29] = { 0.51, 1.8, 0.73, 1.11, 3.8, 1.5, 1.9, 2.7, 4, 6.5, 12.5, 10.8, 19.4, 44.8, 0.29, 0.02, 0.03,
   0.05, 0.07, 0.08, 0.17, 0.19, 0.2, 0.2, 0.2, 0.19, 0.2, 0.24, 0.38 };
   Double_t gr_exp45_errtot_fehy3045[29] = { 0.7, 0.2, 0.5, 0.3, 0.08, 0.08, 0.06, 0.04, 0.025, 0.015, 0.007, 0.0049, 0.0023, 0.0011, 1, 20, 20,
   10, 10, 10, 10, 5, 3, 3, 2, 4, 2, 2, 1 };
   grae = new TGraphAsymmErrors(29,gr_exp45_errtot_fx3045,gr_exp45_errtot_fy3045,gr_exp45_errtot_felx3045,gr_exp45_errtot_fehx3045,gr_exp45_errtot_fely3045,gr_exp45_errtot_fehy3045);
   grae->SetName("gr_exp45_errtot");
   grae->SetTitle("CAPRICE (1994/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(29);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp45_errtot3045 = new TH1F("Graph_gr_exp45_errtot3045","CAPRICE (1994/08)",100,0.135,218.995);
   Graph_gr_exp45_errtot3045->SetMinimum(0.00936);
   Graph_gr_exp45_errtot3045->SetMaximum(1594.999);
   Graph_gr_exp45_errtot3045->SetDirectory(nullptr);
   Graph_gr_exp45_errtot3045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp45_errtot3045->SetLineColor(ci);
   Graph_gr_exp45_errtot3045->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp45_errtot3045->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp45_errtot3045->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp45_errtot3045->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp45_errtot3045->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp45_errtot3045->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp45_errtot3045->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp45_errtot3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp45_errtot3045);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp46_errtot_fx3046[25] = { 15.9, 22.1, 28.8, 37.6, 49.1, 63.9, 83.1, 108, 140, 182, 236, 307, 4.87, 10, 12.1, 3.24, 3.6,
   3.99, 4.41, 5.38, 5.93, 6.53, 7.19, 7.9, 8.68 };
   Double_t gr_exp46_errtot_fy3046[25] = { 5.89, 2.52, 1.24, 0.591, 0.285, 0.138, 0.071, 0.0331, 0.0138, 0.0074, 0.0036, 0.0017, 90.2, 18.1, 11.3, 185, 167,
   139, 109, 72.7, 60, 49.2, 40.2, 30.9, 25.9 };
   Double_t gr_exp46_errtot_felx3046[25] = { 2.8, 2.8, 3.6, 4.6, 6.1, 7.8, 10.1, 13.1, 17, 22, 28, 37, 0.23, 0.9, 1, 0.16, 0.18,
   0.21, 0.22, 0.26, 0.28, 0.31, 0.34, 0.36, 0.39 };
   Double_t gr_exp46_errtot_fely3046[25] = { 0.08, 0.04, 0.02, 0.015, 0.009, 0.005, 0.003, 0.002, 0.0011, 0.0007, 0.0004, 0.0003, 1.1, 0.2, 0.2, 10, 5,
   2, 1, 0.9, 0.8, 0.7, 0.6, 0.4, 0.4 };
   Double_t gr_exp46_errtot_fehx3046[25] = { 3.4, 3.1, 4.2, 5.4, 7, 9.1, 11.8, 15, 20, 26, 34, 43, 0.25, 1.1, 1, 0.18, 0.18,
   0.2, 0.23, 0.27, 0.29, 0.32, 0.35, 0.39, 0.42 };
   Double_t gr_exp46_errtot_fehy3046[25] = { 0.08, 0.04, 0.02, 0.015, 0.009, 0.005, 0.003, 0.002, 0.0011, 0.0007, 0.0004, 0.0003, 2.6, 0.5, 0.2, 11, 7,
   4, 3, 2.1, 1.7, 1.4, 1.2, 0.9, 0.8 };
   grae = new TGraphAsymmErrors(25,gr_exp46_errtot_fx3046,gr_exp46_errtot_fy3046,gr_exp46_errtot_felx3046,gr_exp46_errtot_fehx3046,gr_exp46_errtot_fely3046,gr_exp46_errtot_fehy3046);
   grae->SetName("gr_exp46_errtot");
   grae->SetTitle("CAPRICE (1998/05)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp46_errtot3046 = new TH1F("Graph_gr_exp46_errtot3046","CAPRICE (1998/05)",100,2.772,384.692);
   Graph_gr_exp46_errtot3046->SetMinimum(0.00126);
   Graph_gr_exp46_errtot3046->SetMaximum(215.5999);
   Graph_gr_exp46_errtot3046->SetDirectory(nullptr);
   Graph_gr_exp46_errtot3046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp46_errtot3046->SetLineColor(ci);
   Graph_gr_exp46_errtot3046->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp46_errtot3046->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp46_errtot3046->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp46_errtot3046->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp46_errtot3046->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp46_errtot3046->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp46_errtot3046->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp46_errtot3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp46_errtot3046);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp47_errtot_fx3047[12] = { 199143, 125698, 79435.5, 5011.37, 50113.7, 31606.6, 19914.3, 12569.8, 7943.55, 3160.66, 1991.43, 1256.98 };
   Double_t gr_exp47_errtot_fy3047[12] = { 4.4e-11, 1.7e-10, 6e-10, 1.14e-06, 2.1e-09, 8.2e-09, 3.04e-08, 1.05e-07, 3.46e-07, 3.72e-06, 1.21e-05, 4.07e-05 };
   Double_t gr_exp47_errtot_felx3047[12] = { 41143, 25698, 16335.5, 1031.37, 10313.7, 6506.6, 4114.3, 2569.8, 1633.55, 650.66, 411.43, 256.98 };
   Double_t gr_exp47_errtot_fely3047[12] = { 2.205201e-11, 7.024385e-11, 1.415133e-10, 4.937504e-08, 4.064709e-10, 1.135592e-09, 2.895447e-09, 7.003324e-09, 1.206926e-08, 1.458623e-07, 4.617962e-07, 1.486682e-06 };
   Double_t gr_exp47_errtot_fehx3047[12] = { 51857, 32302, 20564.5, 1298.63, 12986.3, 8193.4, 5185.7, 3230.2, 2056.45, 819.34, 518.57, 323.02 };
   Double_t gr_exp47_errtot_fehy3047[12] = { 2.704239e-11, 8.021346e-11, 1.613258e-10, 4.937504e-08, 5.051917e-10, 1.135592e-09, 2.895447e-09, 7.003324e-09, 1.206926e-08, 1.458623e-07, 4.617962e-07, 1.486682e-06 };
   grae = new TGraphAsymmErrors(12,gr_exp47_errtot_fx3047,gr_exp47_errtot_fy3047,gr_exp47_errtot_felx3047,gr_exp47_errtot_fehx3047,gr_exp47_errtot_fely3047,gr_exp47_errtot_fehy3047);
   grae->SetName("gr_exp47_errtot");
   grae->SetTitle("CREAM-I+III (2004+2007)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(34);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp47_errtot3047 = new TH1F("Graph_gr_exp47_errtot3047","CREAM-I+III (2004+2007)",100,900,276000);
   Graph_gr_exp47_errtot3047->SetMinimum(1.975319e-11);
   Graph_gr_exp47_errtot3047->SetMaximum(4.640535e-05);
   Graph_gr_exp47_errtot3047->SetDirectory(nullptr);
   Graph_gr_exp47_errtot3047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp47_errtot3047->SetLineColor(ci);
   Graph_gr_exp47_errtot3047->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp47_errtot3047->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp47_errtot3047->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp47_errtot3047->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp47_errtot3047->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp47_errtot3047->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp47_errtot3047->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp47_errtot3047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp47_errtot3047);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp48_errtot_fx3048[12] = { 199143, 125698, 79435.5, 50113.7, 31606.6, 19914.3, 7943.55, 5011.37, 3160.66, 1991.43, 1256.98, 12569.8 };
   Double_t gr_exp48_errtot_fy3048[12] = { 4.5e-11, 1.6e-10, 5.9e-10, 1.99e-09, 8.21e-09, 3.14e-08, 3.63e-07, 1.16e-06, 3.72e-06, 1.21e-05, 4.07e-05, 1.1e-07 };
   Double_t gr_exp48_errtot_felx3048[12] = { 41143, 25698, 16335.5, 10313.7, 6506.6, 4114.3, 1633.55, 1031.37, 650.66, 411.43, 256.98, 2569.8 };
   Double_t gr_exp48_errtot_fely3048[12] = { 1.309184e-11, 1.001514e-10, 1.712073e-10, 6.038926e-10, 1.526356e-09, 3.950537e-09, 1.264635e-08, 6.397132e-08, 1.624063e-07, 4.617962e-07, 1.486682e-06, 9.763127e-09 };
   Double_t gr_exp48_errtot_fehx3048[12] = { 51857, 32302, 20564.5, 12986.3, 8193.4, 5185.7, 2056.45, 1298.63, 819.34, 518.57, 323.02, 3230.2 };
   Double_t gr_exp48_errtot_fehy3048[12] = { 2.804276e-11, 1.600946e-10, 3.20643e-10, 6.038926e-10, 1.526356e-09, 3.950537e-09, 1.264635e-08, 6.397132e-08, 1.624063e-07, 4.617962e-07, 1.486682e-06, 9.763127e-09 };
   grae = new TGraphAsymmErrors(12,gr_exp48_errtot_fx3048,gr_exp48_errtot_fy3048,gr_exp48_errtot_felx3048,gr_exp48_errtot_fehx3048,gr_exp48_errtot_fely3048,gr_exp48_errtot_fehy3048);
   grae->SetName("gr_exp48_errtot");
   grae->SetTitle("CREAM-III (2007/12-2008/01)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cc00ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cc00ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp48_errtot3048 = new TH1F("Graph_gr_exp48_errtot3048","CREAM-III (2007/12-2008/01)",100,900,276000);
   Graph_gr_exp48_errtot3048->SetMinimum(2.871734e-11);
   Graph_gr_exp48_errtot3048->SetMaximum(4.640535e-05);
   Graph_gr_exp48_errtot3048->SetDirectory(nullptr);
   Graph_gr_exp48_errtot3048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp48_errtot3048->SetLineColor(ci);
   Graph_gr_exp48_errtot3048->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp48_errtot3048->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp48_errtot3048->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp48_errtot3048->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp48_errtot3048->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp48_errtot3048->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp48_errtot3048->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp48_errtot3048->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp48_errtot3048);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp49_errtot_fx3049[4] = { 0.014, 0.022, 0.04, 0.087 };
   Double_t gr_exp49_errtot_fy3049[4] = { 1600, 2800, 900, 900 };
   Double_t gr_exp49_errtot_felx3049[4] = { 0.003, 0.004, 0.013, 0.027 };
   Double_t gr_exp49_errtot_fely3049[4] = { 1300, 1800, 600, 400 };
   Double_t gr_exp49_errtot_fehx3049[4] = { 0.004, 0.005, 0.02, 0.038 };
   Double_t gr_exp49_errtot_fehy3049[4] = { 3700, 3500, 1100, 700 };
   grae = new TGraphAsymmErrors(4,gr_exp49_errtot_fx3049,gr_exp49_errtot_fy3049,gr_exp49_errtot_felx3049,gr_exp49_errtot_fehx3049,gr_exp49_errtot_fely3049,gr_exp49_errtot_fehy3049);
   grae->SetName("gr_exp49_errtot");
   grae->SetTitle("Discoverer36 (1961/12)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff66ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff66ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(5);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp49_errtot3049 = new TH1F("Graph_gr_exp49_errtot3049","Discoverer36 (1961/12)",100,0.0099,0.1364);
   Graph_gr_exp49_errtot3049->SetMinimum(270);
   Graph_gr_exp49_errtot3049->SetMaximum(6900);
   Graph_gr_exp49_errtot3049->SetDirectory(nullptr);
   Graph_gr_exp49_errtot3049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp49_errtot3049->SetLineColor(ci);
   Graph_gr_exp49_errtot3049->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp49_errtot3049->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp49_errtot3049->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp49_errtot3049->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp49_errtot3049->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp49_errtot3049->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp49_errtot3049->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp49_errtot3049->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp49_errtot3049);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp50_errtot_fx3050[11] = { 0.292, 0.73, 0.4, 0.218, 0.145, 0.07002, 0.05962, 0.07972, 0.04366, 0.03198, 0.01994 };
   Double_t gr_exp50_errtot_fy3050[11] = { 2010, 1327, 1768, 1803, 1957, 990.7, 955.4, 1186, 822.5, 567.5, 290.59 };
   Double_t gr_exp50_errtot_felx3050[11] = { 0.055, 0.145, 0.075, 0.042, 0.037, 0.00852, 0.00782, 0.00522, 0.00636, 0.00498, 0.00694 };
   Double_t gr_exp50_errtot_fely3050[11] = { 74, 63, 84, 980, 1043, 582, 125, 75.6, 26, 21, 7.6 };
   Double_t gr_exp50_errtot_fehx3050[11] = { 0.063, 0.721, 0.2, 0.036, 0.029, 0.00998, 0.00188, 0.01888, 0.00784, 0.00532, 0.00706 };
   Double_t gr_exp50_errtot_fehy3050[11] = { 74, 63, 84, 980, 1043, 582, 125, 75.6, 26, 21, 7.6 };
   grae = new TGraphAsymmErrors(11,gr_exp50_errtot_fx3050,gr_exp50_errtot_fy3050,gr_exp50_errtot_felx3050,gr_exp50_errtot_fehx3050,gr_exp50_errtot_fely3050,gr_exp50_errtot_fehy3050);
   grae->SetName("gr_exp50_errtot");
   grae->SetTitle("E6 (1974/12-1977/12)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#999999");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp50_errtot3050 = new TH1F("Graph_gr_exp50_errtot3050","E6 (1974/12-1977/12)",100,0.0117,1.5948);
   Graph_gr_exp50_errtot3050->SetMinimum(11.289);
   Graph_gr_exp50_errtot3050->SetMaximum(3271.701);
   Graph_gr_exp50_errtot3050->SetDirectory(nullptr);
   Graph_gr_exp50_errtot3050->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp50_errtot3050->SetLineColor(ci);
   Graph_gr_exp50_errtot3050->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp50_errtot3050->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp50_errtot3050->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp50_errtot3050->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp50_errtot3050->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp50_errtot3050->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp50_errtot3050->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp50_errtot3050->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp50_errtot3050);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp51_errtot_fx3051[30] = { 5.19, 6.69, 8.61, 11.1, 14.3, 18.4, 23.8, 39.6, 50.9, 65.7, 84.8, 109, 140, 181, 30.7, 0.21, 4.04,
   0.19, 0.25, 0.3, 0.36, 0.45, 0.56, 0.91, 3.14, 2.44, 1.9, 1.48, 1.16, 0.71 };
   Double_t gr_exp51_errtot_fy3051[30] = { 65.6, 40, 23.3, 12.9, 7.04, 3.78, 2.1, 0.534, 0.301, 0.143, 0.0749, 0.0422, 0.0203, 0.00985, 1.06, 715, 105,
   651, 801, 845, 892, 848, 793, 622, 161, 237, 324, 425, 519, 715 };
   Double_t gr_exp51_errtot_felx3051[30] = { 0.6, 0.78, 0.99, 1.3, 1.6, 2.1, 2.8, 4.6, 5.8, 7.5, 9.7, 12, 15, 20, 3.6, 0.01, 0.48,
   0.01, 0.02, 0.03, 0.03, 0.05, 0.06, 0.11, 0.37, 0.29, 0.22, 0.17, 0.14, 0.08 };
   Double_t gr_exp51_errtot_fely3051[30] = { 4.229657, 2.517936, 1.513275, 0.8062258, 0.4491102, 0.2473863, 0.1360147, 0.03624914, 0.02147091, 0.01081665, 0.005981639, 0.003612478, 0.001984943, 0.001112115, 0.0728011, 124.2578, 7.071068,
   135.2997, 107.2986, 83.29466, 68.26419, 57.21888, 51.24451, 39.11521, 10.04988, 15.0333, 21.09502, 27.07397, 33.13608, 46.17359 };
   Double_t gr_exp51_errtot_fehx3051[30] = { 0.72, 0.93, 1.21, 1.6, 2, 2.6, 3.3, 5.5, 7.3, 9.4, 12, 16, 21, 27, 4.3, 0.02, 0.55,
   0.01, 0.02, 0.03, 0.04, 0.05, 0.07, 0.11, 0.42, 0.33, 0.25, 0.2, 0.15, 0.09 };
   Double_t gr_exp51_errtot_fehy3051[30] = { 4.229657, 2.517936, 1.513275, 0.8062258, 0.4491102, 0.2473863, 0.1360147, 0.03624914, 0.02147091, 0.01081665, 0.005981639, 0.003612478, 0.001984943, 0.001112115, 0.0728011, 124.2578, 7.071068,
   135.2997, 107.2986, 83.29466, 68.26419, 57.21888, 51.24451, 39.11521, 10.04988, 15.0333, 21.09502, 27.07397, 33.13608, 46.17359 };
   grae = new TGraphAsymmErrors(30,gr_exp51_errtot_fx3051,gr_exp51_errtot_fy3051,gr_exp51_errtot_felx3051,gr_exp51_errtot_fehx3051,gr_exp51_errtot_fely3051,gr_exp51_errtot_fehy3051);
   grae->SetName("gr_exp51_errtot");
   grae->SetTitle("IMAX (1992/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#990000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#990000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp51_errtot3051 = new TH1F("Graph_gr_exp51_errtot3051","IMAX (1992/07)",100,0.162,228.782);
   Graph_gr_exp51_errtot3051->SetMinimum(0.007864096);
   Graph_gr_exp51_errtot3051->SetMaximum(1056.29);
   Graph_gr_exp51_errtot3051->SetDirectory(nullptr);
   Graph_gr_exp51_errtot3051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp51_errtot3051->SetLineColor(ci);
   Graph_gr_exp51_errtot3051->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp51_errtot3051->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp51_errtot3051->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp51_errtot3051->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp51_errtot3051->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp51_errtot3051->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp51_errtot3051->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp51_errtot3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp51_errtot3051);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp52_errtot_fx3052[6] = { 0.0275, 0.0312, 0.0412, 0.051, 0.0615, 0.0718 };
   Double_t gr_exp52_errtot_fy3052[6] = { 334, 355, 437, 486, 594, 756 };
   Double_t gr_exp52_errtot_felx3052[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp52_errtot_fely3052[6] = { 59, 58, 71, 73, 112, 133 };
   Double_t gr_exp52_errtot_fehx3052[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp52_errtot_fehy3052[6] = { 59, 58, 71, 73, 112, 133 };
   grae = new TGraphAsymmErrors(6,gr_exp52_errtot_fx3052,gr_exp52_errtot_fy3052,gr_exp52_errtot_felx3052,gr_exp52_errtot_fehx3052,gr_exp52_errtot_fely3052,gr_exp52_errtot_fehy3052);
   grae->SetName("gr_exp52_errtot");
   grae->SetTitle("IMP3 (1965/05-1965/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cccc");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(26);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp52_errtot3052 = new TH1F("Graph_gr_exp52_errtot3052","IMP3 (1965/05-1965/06)",100,0.02307,0.07623);
   Graph_gr_exp52_errtot3052->SetMinimum(213.6);
   Graph_gr_exp52_errtot3052->SetMaximum(950.4);
   Graph_gr_exp52_errtot3052->SetDirectory(nullptr);
   Graph_gr_exp52_errtot3052->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp52_errtot3052->SetLineColor(ci);
   Graph_gr_exp52_errtot3052->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp52_errtot3052->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp52_errtot3052->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp52_errtot3052->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp52_errtot3052->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp52_errtot3052->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp52_errtot3052->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp52_errtot3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp52_errtot3052);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp53_errtot_fx3053[9] = { 0.0575, 0.085, 0.0775, 0.0709, 0.0643, 0.0453, 0.0393, 0.0338, 0.0517 };
   Double_t gr_exp53_errtot_fy3053[9] = { 556, 911, 799, 726, 652, 394, 336, 300, 494 };
   Double_t gr_exp53_errtot_felx3053[9] = { 0.0032, 0.0041, 0.0041, 0.004, 0.0036, 0.0028, 0.0027, 0.0023, 0.0029 };
   Double_t gr_exp53_errtot_fely3053[9] = { 31.1, 68.6, 44.7, 37.1, 42.7, 22, 17.2, 8.27, 27.6 };
   Double_t gr_exp53_errtot_fehx3053[9] = { 0.0032, 0.0047, 0.0034, 0.0025, 0.0026, 0.0035, 0.0032, 0.0028, 0.0026 };
   Double_t gr_exp53_errtot_fehy3053[9] = { 31.1, 68.6, 44.7, 37.1, 42.7, 22, 17.2, 8.27, 27.6 };
   grae = new TGraphAsymmErrors(9,gr_exp53_errtot_fx3053,gr_exp53_errtot_fy3053,gr_exp53_errtot_felx3053,gr_exp53_errtot_fehx3053,gr_exp53_errtot_fely3053,gr_exp53_errtot_fehy3053);
   grae->SetName("gr_exp53_errtot");
   grae->SetTitle("IMP3 (1965/05-1965/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#33ff00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#33ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(32);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp53_errtot3053 = new TH1F("Graph_gr_exp53_errtot3053","IMP3 (1965/05-1965/09)",100,0.02568,0.09552);
   Graph_gr_exp53_errtot3053->SetMinimum(222.943);
   Graph_gr_exp53_errtot3053->SetMaximum(1048.387);
   Graph_gr_exp53_errtot3053->SetDirectory(nullptr);
   Graph_gr_exp53_errtot3053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp53_errtot3053->SetLineColor(ci);
   Graph_gr_exp53_errtot3053->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp53_errtot3053->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp53_errtot3053->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp53_errtot3053->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp53_errtot3053->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp53_errtot3053->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp53_errtot3053->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp53_errtot3053->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp53_errtot3053);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp54_errtot_fx3054[5] = { 0.034, 0.0426, 0.0535, 0.0658, 0.0834 };
   Double_t gr_exp54_errtot_fy3054[5] = { 47.9, 58.2, 72.5, 84.3, 86 };
   Double_t gr_exp54_errtot_felx3054[5] = { 0.0034, 0.0054, 0.0054, 0.0064, 0.0112 };
   Double_t gr_exp54_errtot_fely3054[5] = { 13.6, 6.95, 8.66, 8.9, 19.7 };
   Double_t gr_exp54_errtot_fehx3054[5] = { 0.0032, 0.0055, 0.0059, 0.0064, 0.0112 };
   Double_t gr_exp54_errtot_fehy3054[5] = { 13.6, 6.95, 8.66, 8.9, 19.7 };
   grae = new TGraphAsymmErrors(5,gr_exp54_errtot_fx3054,gr_exp54_errtot_fy3054,gr_exp54_errtot_felx3054,gr_exp54_errtot_fehx3054,gr_exp54_errtot_fely3054,gr_exp54_errtot_fehy3054);
   grae->SetName("gr_exp54_errtot");
   grae->SetTitle("IMP5 (1970/04-1970/10)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff6699");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff6699");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(30);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp54_errtot3054 = new TH1F("Graph_gr_exp54_errtot3054","IMP5 (1970/04-1970/10)",100,0.0242,0.101);
   Graph_gr_exp54_errtot3054->SetMinimum(27.16);
   Graph_gr_exp54_errtot3054->SetMaximum(112.84);
   Graph_gr_exp54_errtot3054->SetDirectory(nullptr);
   Graph_gr_exp54_errtot3054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp54_errtot3054->SetLineColor(ci);
   Graph_gr_exp54_errtot3054->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp54_errtot3054->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp54_errtot3054->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp54_errtot3054->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp54_errtot3054->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp54_errtot3054->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp54_errtot3054->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp54_errtot3054->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp54_errtot3054);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp55_errtot_fx3055[11] = { 0.0107, 0.0827, 0.0651, 0.0532, 0.0427, 0.0336, 0.025, 0.0156, 0.0064, 0.0039, 0.0023 };
   Double_t gr_exp55_errtot_fy3055[11] = { 147, 220, 181, 124, 92.6, 68.5, 42, 57.1, 437, 2687, 8295 };
   Double_t gr_exp55_errtot_felx3055[11] = { 0.0022, 0.0107, 0.0062, 0.0053, 0.0062, 0.003, 0.0059, 0.0029, 0.0014, 0.0009, 0.0003 };
   Double_t gr_exp55_errtot_fely3055[11] = { 26.1, 59.1, 16.6, 12.2, 10.4, 14.6, 9.33, 12.2, 195, 1301, 2430 };
   Double_t gr_exp55_errtot_fehx3055[11] = { 0.002, 0.0116, 0.0069, 0.0057, 0.0052, 0.0029, 0.0056, 0.0035, 0.0021, 0.0011, 0.0007 };
   Double_t gr_exp55_errtot_fehy3055[11] = { 26.1, 59.1, 16.6, 12.2, 10.4, 14.6, 9.33, 12.2, 195, 1301, 2430 };
   grae = new TGraphAsymmErrors(11,gr_exp55_errtot_fx3055,gr_exp55_errtot_fy3055,gr_exp55_errtot_felx3055,gr_exp55_errtot_fehx3055,gr_exp55_errtot_fely3055,gr_exp55_errtot_fehy3055);
   grae->SetName("gr_exp55_errtot");
   grae->SetTitle("IMP5 (1971/06-1971/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0033ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0033ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(28);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp55_errtot3055 = new TH1F("Graph_gr_exp55_errtot3055","IMP5 (1971/06-1971/09)",100,0.0018,0.10353);
   Graph_gr_exp55_errtot3055->SetMinimum(29.403);
   Graph_gr_exp55_errtot3055->SetMaximum(11794.23);
   Graph_gr_exp55_errtot3055->SetDirectory(nullptr);
   Graph_gr_exp55_errtot3055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp55_errtot3055->SetLineColor(ci);
   Graph_gr_exp55_errtot3055->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp55_errtot3055->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp55_errtot3055->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp55_errtot3055->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp55_errtot3055->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp55_errtot3055->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp55_errtot3055->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp55_errtot3055->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp55_errtot3055);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp56_errtot_fx3056[10] = { 0.0835, 0.0654, 0.0534, 0.0426, 0.025, 0.0155, 0.0106, 0.0061, 0.0038, 0.034 };
   Double_t gr_exp56_errtot_fy3056[10] = { 646, 512, 352, 267, 111, 163, 207, 1455, 8511, 201 };
   Double_t gr_exp56_errtot_felx3056[10] = { 0.0121, 0.0055, 0.0054, 0.0059, 0.0058, 0.0029, 0.0023, 0.0011, 0.0007, 0.0032 };
   Double_t gr_exp56_errtot_fely3056[10] = { 153, 47, 32.2, 26.3, 23.1, 38.8, 45.2, 548, 2087, 47.8 };
   Double_t gr_exp56_errtot_fehx3056[10] = { 0.0106, 0.006, 0.0065, 0.0054, 0.0058, 0.0037, 0.002, 0.0022, 0.0012, 0.0027 };
   Double_t gr_exp56_errtot_fehy3056[10] = { 153, 47, 32.2, 26.3, 23.1, 38.8, 45.2, 548, 2087, 47.8 };
   grae = new TGraphAsymmErrors(10,gr_exp56_errtot_fx3056,gr_exp56_errtot_fy3056,gr_exp56_errtot_felx3056,gr_exp56_errtot_fehx3056,gr_exp56_errtot_fely3056,gr_exp56_errtot_fehy3056);
   grae->SetName("gr_exp56_errtot");
   grae->SetTitle("IMP5 (1972/06-1972/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cccc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cccc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(27);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp56_errtot3056 = new TH1F("Graph_gr_exp56_errtot3056","IMP5 (1972/06-1972/09)",100,0.00279,0.1032);
   Graph_gr_exp56_errtot3056->SetMinimum(79.11);
   Graph_gr_exp56_errtot3056->SetMaximum(11649.01);
   Graph_gr_exp56_errtot3056->SetDirectory(nullptr);
   Graph_gr_exp56_errtot3056->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp56_errtot3056->SetLineColor(ci);
   Graph_gr_exp56_errtot3056->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp56_errtot3056->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp56_errtot3056->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp56_errtot3056->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp56_errtot3056->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp56_errtot3056->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp56_errtot3056->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp56_errtot3056->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp56_errtot3056);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp57_errtot_fx3057[5] = { 0.031, 0.042, 0.056, 0.071, 0.089 };
   Double_t gr_exp57_errtot_fy3057[5] = { 254, 310, 349, 514, 728 };
   Double_t gr_exp57_errtot_felx3057[5] = { 0, 0, 0, 0, 0 };
   Double_t gr_exp57_errtot_fely3057[5] = { 74, 42, 36, 65, 68 };
   Double_t gr_exp57_errtot_fehx3057[5] = { 0, 0, 0, 0, 0 };
   Double_t gr_exp57_errtot_fehy3057[5] = { 74, 42, 36, 65, 68 };
   grae = new TGraphAsymmErrors(5,gr_exp57_errtot_fx3057,gr_exp57_errtot_fy3057,gr_exp57_errtot_felx3057,gr_exp57_errtot_fehx3057,gr_exp57_errtot_fely3057,gr_exp57_errtot_fehy3057);
   grae->SetName("gr_exp57_errtot");
   grae->SetTitle("IMP7 (1973/05-1973/07)");
   grae->SetFillStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp57_errtot3057 = new TH1F("Graph_gr_exp57_errtot3057","IMP7 (1973/05-1973/07)",100,0.0252,0.0948);
   Graph_gr_exp57_errtot3057->SetMinimum(118.4);
   Graph_gr_exp57_errtot3057->SetMaximum(857.6);
   Graph_gr_exp57_errtot3057->SetDirectory(nullptr);
   Graph_gr_exp57_errtot3057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp57_errtot3057->SetLineColor(ci);
   Graph_gr_exp57_errtot3057->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp57_errtot3057->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp57_errtot3057->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp57_errtot3057->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp57_errtot3057->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp57_errtot3057->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp57_errtot3057->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp57_errtot3057->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp57_errtot3057);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp58_errtot_fx3058[6] = { 0.024, 0.083, 0.068, 0.055, 0.045, 0.035 };
   Double_t gr_exp58_errtot_fy3058[6] = { 210, 899, 641, 508, 416, 287 };
   Double_t gr_exp58_errtot_felx3058[6] = { 0.005, 0.009, 0.006, 0.005, 0.005, 0.006 };
   Double_t gr_exp58_errtot_fely3058[6] = { 16, 89, 55, 35, 41, 19 };
   Double_t gr_exp58_errtot_fehx3058[6] = { 0.005, 0.009, 0.006, 0.007, 0.005, 0.005 };
   Double_t gr_exp58_errtot_fehy3058[6] = { 16, 89, 55, 35, 41, 19 };
   grae = new TGraphAsymmErrors(6,gr_exp58_errtot_fx3058,gr_exp58_errtot_fy3058,gr_exp58_errtot_felx3058,gr_exp58_errtot_fehx3058,gr_exp58_errtot_fely3058,gr_exp58_errtot_fehy3058);
   grae->SetName("gr_exp58_errtot");
   grae->SetTitle("IMP8 (1974/07-1974/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp58_errtot3058 = new TH1F("Graph_gr_exp58_errtot3058","IMP8 (1974/07-1974/09)",100,0.0117,0.0993);
   Graph_gr_exp58_errtot3058->SetMinimum(114.6);
   Graph_gr_exp58_errtot3058->SetMaximum(1067.4);
   Graph_gr_exp58_errtot3058->SetDirectory(nullptr);
   Graph_gr_exp58_errtot3058->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp58_errtot3058->SetLineColor(ci);
   Graph_gr_exp58_errtot3058->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp58_errtot3058->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp58_errtot3058->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp58_errtot3058->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp58_errtot3058->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp58_errtot3058->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp58_errtot3058->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp58_errtot3058->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp58_errtot3058);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp59_errtot_fx3059[9] = { 0.0726, 0.0622, 0.0526, 0.0432, 0.0227, 0.0172, 0.0137, 0.0118, 0.0323 };
   Double_t gr_exp59_errtot_fy3059[9] = { 1585, 1373, 1183, 816, 459, 434, 590, 908, 547 };
   Double_t gr_exp59_errtot_felx3059[9] = { 0.0068, 0.0056, 0.0055, 0.0052, 0.0034, 0.0023, 0.0012, 0.001, 0.006 };
   Double_t gr_exp59_errtot_fely3059[9] = { 186, 154, 115, 104, 48, 44, 66, 140, 81 };
   Double_t gr_exp59_errtot_fehx3059[9] = { 0.0071, 0.0036, 0.004, 0.0039, 0.0036, 0.0021, 0.0012, 0.0007, 0.0057 };
   Double_t gr_exp59_errtot_fehy3059[9] = { 186, 154, 115, 104, 48, 44, 66, 140, 81 };
   grae = new TGraphAsymmErrors(9,gr_exp59_errtot_fx3059,gr_exp59_errtot_fy3059,gr_exp59_errtot_felx3059,gr_exp59_errtot_fehx3059,gr_exp59_errtot_fely3059,gr_exp59_errtot_fehy3059);
   grae->SetName("gr_exp59_errtot");
   grae->SetTitle("IMP8 (1977/01-1979/12)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp59_errtot3059 = new TH1F("Graph_gr_exp59_errtot3059","IMP8 (1977/01-1979/12)",100,0.00391,0.08659);
   Graph_gr_exp59_errtot3059->SetMinimum(251.9);
   Graph_gr_exp59_errtot3059->SetMaximum(1909.1);
   Graph_gr_exp59_errtot3059->SetDirectory(nullptr);
   Graph_gr_exp59_errtot3059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp59_errtot3059->SetLineColor(ci);
   Graph_gr_exp59_errtot3059->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp59_errtot3059->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp59_errtot3059->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp59_errtot3059->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp59_errtot3059->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp59_errtot3059->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp59_errtot3059->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp59_errtot3059->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp59_errtot3059);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp60_errtot_fx3060[9] = { 0.0365, 0.0875, 0.074, 0.0612, 0.0493, 0.0247, 0.0184, 0.0145, 0.0122 };
   Double_t gr_exp60_errtot_fy3060[9] = { 61.4826, 125.202, 127.329, 84.4886, 73.9049, 228.962, 790.722, 3044.68, 7777.84 };
   Double_t gr_exp60_errtot_felx3060[9] = { 0.0074, 0.0084, 0.0082, 0.0072, 0.0058, 0.0046, 0.0022, 0.0015, 0.0014 };
   Double_t gr_exp60_errtot_fely3060[9] = { 13.682, 16.755, 18.255, 12.111, 13.472, 28.477, 98.342, 321.88, 1115 };
   Double_t gr_exp60_errtot_fehx3060[9] = { 0.007, 0.01, 0.0051, 0.0046, 0.0047, 0.0044, 0.0017, 0.0017, 0.0008 };
   Double_t gr_exp60_errtot_fehy3060[9] = { 13.682, 16.755, 18.255, 12.111, 13.472, 28.477, 98.342, 321.88, 1115 };
   grae = new TGraphAsymmErrors(9,gr_exp60_errtot_fx3060,gr_exp60_errtot_fy3060,gr_exp60_errtot_felx3060,gr_exp60_errtot_fehx3060,gr_exp60_errtot_fely3060,gr_exp60_errtot_fehy3060);
   grae->SetName("gr_exp60_errtot");
   grae->SetTitle("IMP8 (1982/07-1982/12)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp60_errtot3060 = new TH1F("Graph_gr_exp60_errtot3060","IMP8 (1982/07-1982/12)",100,0.00213,0.10617);
   Graph_gr_exp60_errtot3060->SetMinimum(43.02054);
   Graph_gr_exp60_errtot3060->SetMaximum(9777.344);
   Graph_gr_exp60_errtot3060->SetDirectory(nullptr);
   Graph_gr_exp60_errtot3060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp60_errtot3060->SetLineColor(ci);
   Graph_gr_exp60_errtot3060->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp60_errtot3060->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp60_errtot3060->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp60_errtot3060->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp60_errtot3060->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp60_errtot3060->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp60_errtot3060->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp60_errtot3060->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp60_errtot3060);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp61_errtot_fx3061[8] = { 0.0144, 0.0873, 0.0751, 0.0625, 0.0495, 0.036, 0.0243, 0.0179 };
   Double_t gr_exp61_errtot_fy3061[8] = { 6859.7, 298.91, 206.7, 185.35, 129.24, 91.647, 316.72, 1543.4 };
   Double_t gr_exp61_errtot_felx3061[8] = { 0.0017, 0.0109, 0.0077, 0.0078, 0.0055, 0.0075, 0.0044, 0.002 };
   Double_t gr_exp61_errtot_fely3061[8] = { 918.8, 42.89, 27.69, 21.33, 17.31, 14.55, 45.45, 206.7 };
   Double_t gr_exp61_errtot_fehx3061[8] = { 0.0015, 0.01, 0.0013, 0.0049, 0.0052, 0.008, 0.0042, 0.002 };
   Double_t gr_exp61_errtot_fehy3061[8] = { 918.8, 42.89, 27.69, 21.33, 17.31, 14.55, 45.45, 206.7 };
   grae = new TGraphAsymmErrors(8,gr_exp61_errtot_fx3061,gr_exp61_errtot_fy3061,gr_exp61_errtot_felx3061,gr_exp61_errtot_fehx3061,gr_exp61_errtot_fely3061,gr_exp61_errtot_fehy3061);
   grae->SetName("gr_exp61_errtot");
   grae->SetTitle("IMP8 (1984/08-1984/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(29);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp61_errtot3061 = new TH1F("Graph_gr_exp61_errtot3061","IMP8 (1984/08-1984/09)",100,0.00424,0.10576);
   Graph_gr_exp61_errtot3061->SetMinimum(69.3873);
   Graph_gr_exp61_errtot3061->SetMaximum(8548.64);
   Graph_gr_exp61_errtot3061->SetDirectory(nullptr);
   Graph_gr_exp61_errtot3061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp61_errtot3061->SetLineColor(ci);
   Graph_gr_exp61_errtot3061->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp61_errtot3061->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp61_errtot3061->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp61_errtot3061->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp61_errtot3061->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp61_errtot3061->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp61_errtot3061->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp61_errtot3061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp61_errtot3061);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp62_errtot_fx3062[13] = { 327291.9, 519480.5, 206494.6, 129969.2, 81697, 51418.28, 20404.41, 12854.57, 8092.218, 5092.818, 2019.901, 3209.673, 32381.48 };
   Double_t gr_exp62_errtot_fy3062[13] = { 1.17e-11, 3.88e-12, 4.08e-11, 1.4e-10, 5.72e-10, 1.94e-09, 2.61e-08, 1e-07, 3.51e-07, 1.14e-06, 1.24e-05, 3.78e-06, 7.1e-09 };
   Double_t gr_exp62_errtot_felx3062[13] = { 67291.9, 107480.5, 42494.6, 26969.2, 16897, 10618.28, 4204.41, 2654.57, 1672.218, 1052.818, 419.901, 659.673, 6681.48 };
   Double_t gr_exp62_errtot_fely3062[13] = { 7.025667e-12, 3.007341e-12, 1.65469e-11, 3.687818e-11, 1.002447e-10, 2.507987e-10, 1.979899e-09, 6.403124e-09, 2.469818e-08, 9.219544e-08, 1.529706e-06, 3.687818e-07, 6.742403e-10 };
   Double_t gr_exp62_errtot_fehx3062[13] = { 84708.1, 135519.5, 53505.4, 34030.8, 21303, 13381.72, 5295.59, 3345.43, 2107.782, 1327.182, 530.099, 830.327, 8418.52 };
   Double_t gr_exp62_errtot_fehy3062[13] = { 7.025667e-12, 3.006659e-12, 1.65215e-11, 3.667424e-11, 9.932774e-11, 2.507987e-10, 1.979899e-09, 6.403124e-09, 2.284732e-08, 9.219544e-08, 2.319483e-06, 5.261179e-07, 6.573431e-10 };
   grae = new TGraphAsymmErrors(13,gr_exp62_errtot_fx3062,gr_exp62_errtot_fy3062,gr_exp62_errtot_felx3062,gr_exp62_errtot_fehx3062,gr_exp62_errtot_fely3062,gr_exp62_errtot_fehy3062);
   grae->SetName("gr_exp62_errtot");
   grae->SetTitle("ISS-CREAM (2017/08-2019/02)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cc00ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cc00ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp62_errtot3062 = new TH1F("Graph_gr_exp62_errtot3062","ISS-CREAM (2017/08-2019/02)",100,1440,720340);
   Graph_gr_exp62_errtot3062->SetMinimum(7.853931e-13);
   Graph_gr_exp62_errtot3062->SetMaximum(1.619143e-05);
   Graph_gr_exp62_errtot3062->SetDirectory(nullptr);
   Graph_gr_exp62_errtot3062->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp62_errtot3062->SetLineColor(ci);
   Graph_gr_exp62_errtot3062->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp62_errtot3062->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp62_errtot3062->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp62_errtot3062->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp62_errtot3062->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp62_errtot3062->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp62_errtot3062->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp62_errtot3062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp62_errtot3062);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp63_errtot_fx3063[7] = { 620000, 260000, 110000, 58000, 19000, 12000, 8000 };
   Double_t gr_exp63_errtot_fy3063[7] = { 2.74e-12, 1.86e-11, 1.35e-10, 1.3e-09, 3.01e-08, 8.88e-08, 3.67e-07 };
   Double_t gr_exp63_errtot_felx3063[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp63_errtot_fely3063[7] = { 2.31e-12, 6.58e-12, 3.61e-11, 1.94e-10, 2.46e-09, 8.88e-09, 3.67e-08 };
   Double_t gr_exp63_errtot_fehx3063[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp63_errtot_fehy3063[7] = { 2.74e-12, 6.58e-12, 3.61e-11, 1.94e-10, 2.46e-09, 8.88e-09, 3.67e-08 };
   grae = new TGraphAsymmErrors(7,gr_exp63_errtot_fx3063,gr_exp63_errtot_fy3063,gr_exp63_errtot_felx3063,gr_exp63_errtot_fehx3063,gr_exp63_errtot_fely3063,gr_exp63_errtot_fehy3063);
   grae->SetName("gr_exp63_errtot");
   grae->SetTitle("JACEE (1979+1980+1982+1983+1984+1986+1987+1988+1990+1994+1995)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff66ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff66ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(34);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp63_errtot3063 = new TH1F("Graph_gr_exp63_errtot3063","JACEE (1979+1980+1982+1983+1984+1986+1987+1988+1990+1994+1995)",100,7200,681200);
   Graph_gr_exp63_errtot3063->SetMinimum(3.87e-13);
   Graph_gr_exp63_errtot3063->SetMaximum(4.4407e-07);
   Graph_gr_exp63_errtot3063->SetDirectory(nullptr);
   Graph_gr_exp63_errtot3063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp63_errtot3063->SetLineColor(ci);
   Graph_gr_exp63_errtot3063->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp63_errtot3063->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp63_errtot3063->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp63_errtot3063->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp63_errtot3063->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp63_errtot3063->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp63_errtot3063->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp63_errtot3063->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp63_errtot3063);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp64_errtot_fx3064[24] = { 22.57, 82.84, 57.04, 43.93, 41.09401, 35.45, 30.13, 28.57843, 25.84, 18.12, 12.71, 9.747, 5.233, 7.23, 0.212, 0.296, 0.42,
   0.598, 0.831, 1.186, 1.668, 2.354, 3.319, 4.179 };
   Double_t gr_exp64_errtot_fy3064[24] = { 2.35, 0.076, 0.197, 0.393, 0.510293, 0.689, 1.101, 1.323294, 1.665, 4.138, 10.34, 19.93, 85.76, 42.53, 1929, 2243, 2129,
   1835, 1454, 1000, 665.3, 390.7, 213.2, 138.7 };
   Double_t gr_exp64_errtot_felx3064[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp64_errtot_fely3064[24] = { 0.2223, 0.0081, 0.0211, 0.0276, 0.08614614, 0.0695, 0.1179, 0.1978814, 0.1678, 0.2902, 0.8512, 2.0079, 8.1078, 4.0214, 186.54, 296.32, 227.83,
   177.39, 137.54, 82.301, 54.731, 36.956, 24.161, 14.831 };
   Double_t gr_exp64_errtot_fehx3064[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp64_errtot_fehy3064[24] = { 0.2223, 0.0081, 0.0211, 0.0276, 0.08614614, 0.0695, 0.1179, 0.1978814, 0.1678, 0.2902, 0.8512, 2.0079, 8.1078, 4.0214, 186.54, 296.32, 227.83,
   177.39, 137.54, 82.301, 54.731, 36.956, 24.161, 14.831 };
   grae = new TGraphAsymmErrors(24,gr_exp64_errtot_fx3064,gr_exp64_errtot_fy3064,gr_exp64_errtot_felx3064,gr_exp64_errtot_fehx3064,gr_exp64_errtot_fely3064,gr_exp64_errtot_fehy3064);
   grae->SetName("gr_exp64_errtot");
   grae->SetTitle("LEAP (1987/08)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#999999");
   grae->SetMarkerColor(ci);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp64_errtot3064 = new TH1F("Graph_gr_exp64_errtot3064","LEAP (1987/08)",100,0.1908,91.1028);
   Graph_gr_exp64_errtot3064->SetMinimum(0.06111);
   Graph_gr_exp64_errtot3064->SetMaximum(2793.245);
   Graph_gr_exp64_errtot3064->SetDirectory(nullptr);
   Graph_gr_exp64_errtot3064->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp64_errtot3064->SetLineColor(ci);
   Graph_gr_exp64_errtot3064->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp64_errtot3064->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp64_errtot3064->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp64_errtot3064->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp64_errtot3064->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp64_errtot3064->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp64_errtot3064->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp64_errtot3064->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp64_errtot3064);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp65_errtot_fx3065[42] = { 0.943, 1.071, 1.224, 1.403, 1.658, 1.966, 2.508, 2.952, 3.476, 3.842, 4.479, 5.135, 5.866, 6.746, 8.404, 10.12, 13.88,
   19.95, 28.21, 35.94, 0.398, 0.734, 0.833, 0.146, 0.162, 0.171, 0.187, 0.211, 0.227, 0.249, 0.278, 0.308, 0.35,
   0.373, 0.132, 0.44, 0.48, 0.518, 0.571, 0.625, 0.673, 0.331 };
   Double_t gr_exp65_errtot_fy3065[42] = { 288, 282, 265, 237, 217, 185, 156, 123, 109, 88.3, 74.2, 61.3, 48.2, 36.5, 25.1, 16.4, 8.82,
   3.8, 2.3, 0.968, 269, 302, 302, 139, 138, 167, 172, 185, 201, 217, 217, 223, 249,
   261, 126, 259, 276, 286, 292, 293, 301, 236 };
   Double_t gr_exp65_errtot_felx3065[42] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp65_errtot_fely3065[42] = { 8.78, 0.0124, 9.9, 9.66, 6.6, 6.28, 6.9, 4.61, 4.83, 4.22, 3.28, 3.79, 2.81, 2.39, 1.2, 0.845, 0.421,
   0.181, 0.0941, 0.0565, 0.0128, 9.2, 9.2, 4.72, 5.62, 6.8, 7.01, 8.83, 9.63, 7.37, 8.12, 6.03, 6.74,
   0.0115, 4.69, 0.0124, 0.0112, 9.68, 0.0129, 7.92, 0.0102, 8.83 };
   Double_t gr_exp65_errtot_fehx3065[42] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp65_errtot_fehy3065[42] = { 8.78, 0.0124, 9.9, 9.66, 6.6, 6.28, 6.9, 4.61, 4.83, 4.22, 3.28, 3.79, 2.81, 2.39, 1.2, 0.845, 0.421,
   0.181, 0.0941, 0.0565, 0.0128, 9.2, 9.2, 4.72, 5.62, 6.8, 7.01, 8.83, 9.63, 7.37, 8.12, 6.03, 6.74,
   0.0115, 4.69, 0.0124, 0.0112, 9.68, 0.0129, 7.92, 0.0102, 8.83 };
   grae = new TGraphAsymmErrors(42,gr_exp65_errtot_fx3065,gr_exp65_errtot_fy3065,gr_exp65_errtot_felx3065,gr_exp65_errtot_fehx3065,gr_exp65_errtot_fely3065,gr_exp65_errtot_fehy3065);
   grae->SetName("gr_exp65_errtot");
   grae->SetTitle("MASS (1989/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#990000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#990000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(5);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp65_errtot3065 = new TH1F("Graph_gr_exp65_errtot3065","MASS (1989/09)",100,0.1188,39.5208);
   Graph_gr_exp65_errtot3065->SetMinimum(0.82035);
   Graph_gr_exp65_errtot3065->SetMaximum(342.2288);
   Graph_gr_exp65_errtot3065->SetDirectory(nullptr);
   Graph_gr_exp65_errtot3065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp65_errtot3065->SetLineColor(ci);
   Graph_gr_exp65_errtot3065->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp65_errtot3065->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp65_errtot3065->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp65_errtot3065->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp65_errtot3065->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp65_errtot3065->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp65_errtot3065->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp65_errtot3065->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp65_errtot3065);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp66_errtot_fx3066[23] = { 14.1, 16.1, 18.3, 21, 24, 27.5, 31.6, 36.3, 44.8, 60.3, 83, 4.22, 12.3, 10.8, 9.49, 8.31, 7.28,
   6.36, 5.56, 4.85, 3.68, 3.21, 2.77 };
   Double_t gr_exp66_errtot_fy3066[23] = { 7.63, 5.52, 3.89, 2.79, 1.95, 1.4, 0.961, 0.652, 0.36, 0.167, 0.072, 83.46, 10.66, 13.9, 19.18, 24.9, 32.83,
   42.04, 54.8, 67.66, 86.9, 51.84, 23.1 };
   Double_t gr_exp66_errtot_felx3066[23] = { 0.9, 1, 1.1, 1.3, 1.5, 1.8, 2.1, 2.4, 5.8, 8.1, 12, 0.29, 0.7, 0.7, 0.6, 0.53, 0.47,
   0.41, 0.37, 0.33, 0.27, 0.26, 0.22 };
   Double_t gr_exp66_errtot_fely3066[23] = { 0.13, 0.1, 0.08, 0.06, 0.05, 0.04, 0.029, 0.022, 0.01, 0.006, 0.003, 0.85, 0.17, 0.21, 0.26, 0.32, 0.4,
   0.48, 0.6, 0.72, 0.92, 0.71, 0.48 };
   Double_t gr_exp66_errtot_fehx3066[23] = { 1, 1.1, 1.4, 1.5, 1.7, 2, 2.3, 2.7, 7.4, 10.7, 16.1, 0.3, 0.9, 0.8, 0.61, 0.58, 0.5,
   0.45, 0.39, 0.34, 0.25, 0.2, 0.18 };
   Double_t gr_exp66_errtot_fehy3066[23] = { 0.13, 0.1, 0.08, 0.06, 0.05, 0.04, 0.029, 0.022, 0.01, 0.006, 0.003, 0.85, 0.17, 0.21, 0.26, 0.32, 0.4,
   0.48, 0.6, 0.72, 0.92, 0.71, 0.48 };
   grae = new TGraphAsymmErrors(23,gr_exp66_errtot_fx3066,gr_exp66_errtot_fy3066,gr_exp66_errtot_felx3066,gr_exp66_errtot_fehx3066,gr_exp66_errtot_fely3066,gr_exp66_errtot_fehy3066);
   grae->SetName("gr_exp66_errtot");
   grae->SetTitle("MASS (1991/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cccc");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp66_errtot3066 = new TH1F("Graph_gr_exp66_errtot3066","MASS (1991/09)",100,2.295,108.755);
   Graph_gr_exp66_errtot3066->SetMinimum(0.0621);
   Graph_gr_exp66_errtot3066->SetMaximum(96.5951);
   Graph_gr_exp66_errtot3066->SetDirectory(nullptr);
   Graph_gr_exp66_errtot3066->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp66_errtot3066->SetLineColor(ci);
   Graph_gr_exp66_errtot3066->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp66_errtot3066->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp66_errtot3066->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp66_errtot3066->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp66_errtot3066->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp66_errtot3066->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp66_errtot3066->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp66_errtot3066->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp66_errtot3066);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp67_errtot_fx3067[8] = { 14109.6, 226274, 113137, 56568.5, 22360.7, 17776.4, 11225, 31622.8 };
   Double_t gr_exp67_errtot_fy3067[8] = { 4.78e-08, 1.2e-11, 8.52e-11, 6.8e-10, 1.41e-08, 2.76e-08, 1.05e-07, 3.8e-09 };
   Double_t gr_exp67_errtot_felx3067[8] = { 1509.6, 66274, 33137, 16568.5, 2360.7, 1976.4, 1225, 6622.8 };
   Double_t gr_exp67_errtot_fely3067[8] = { 4.78e-09, 9.75e-12, 3.65e-11, 1.42e-10, 1.41e-09, 2.76e-09, 1.05e-08, 6.76e-10 };
   Double_t gr_exp67_errtot_fehx3067[8] = { 1690.4, 93726, 46863, 23431.5, 2639.3, 2223.6, 1375, 8377.2 };
   Double_t gr_exp67_errtot_fehy3067[8] = { 4.78e-09, 9.75e-12, 3.65e-11, 1.42e-10, 1.41e-09, 2.76e-09, 1.05e-08, 6.76e-10 };
   grae = new TGraphAsymmErrors(8,gr_exp67_errtot_fx3067,gr_exp67_errtot_fy3067,gr_exp67_errtot_felx3067,gr_exp67_errtot_fehx3067,gr_exp67_errtot_fely3067,gr_exp67_errtot_fehy3067);
   grae->SetName("gr_exp67_errtot");
   grae->SetTitle("MUBEE (1975/09+1978/08+1986/07+1987/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#33ff00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#33ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp67_errtot3067 = new TH1F("Graph_gr_exp67_errtot3067","MUBEE (1975/09+1978/08+1986/07+1987/07)",100,9000,351000);
   Graph_gr_exp67_errtot3067->SetMinimum(2.025e-12);
   Graph_gr_exp67_errtot3067->SetMaximum(1.270498e-07);
   Graph_gr_exp67_errtot3067->SetDirectory(nullptr);
   Graph_gr_exp67_errtot3067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp67_errtot3067->SetLineColor(ci);
   Graph_gr_exp67_errtot3067->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp67_errtot3067->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp67_errtot3067->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp67_errtot3067->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp67_errtot3067->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp67_errtot3067->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp67_errtot3067->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp67_errtot3067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp67_errtot3067);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp68_errtot_fx3068[78] = { 7.3572, 1.88921, 6.637, 5.98111, 5.38395, 4.84043, 4.34595, 3.89628, 3.5867, 3.39199, 3.20644, 3.02967, 2.86128, 2.70093, 2.54826, 2.40294, 2.26467,
   2.13315, 2.00809, 21.7836, 0.410137, 46.5042, 42.3314, 38.5259, 35.0555, 31.8906, 29.0044, 26.3724, 23.9722, 8.14781, 19.7878, 17.968, 16.3087,
   14.7957, 13.4164, 12.159, 11.0127, 9.96784, 9.01557, 0.197403, 0.088069, 0.379183, 0.350305, 0.323392, 0.298336, 0.275034, 0.253384, 0.233291, 0.21466,
   1.66898, 0.181431, 0.166664, 0.153021, 0.140429, 0.128815, 0.118112, 0.108255, 0.099183, 1.77625, 0.47873, 0.443281, 1.56713, 1.4705, 1.37887, 1.29201,
   1.20974, 1.13186, 1.05818, 0.988531, 0.860639, 0.922739, 0.516607, 0.557037, 0.600147, 0.64607, 0.694938, 0.746891, 0.802076 };
   Double_t gr_exp68_errtot_fy3068[78] = { 41.5184, 464.852, 51.9114, 64.4146, 81.1302, 100.561, 123.552, 151.305, 175.055, 191.608, 214.543, 231.965, 254.216, 282.099, 311.668, 331.769, 362.787,
   400.953, 430.748, 2.93846, 1289.77, 0.352752, 0.486025, 0.632091, 0.797227, 1.04119, 1.37969, 1.79701, 2.28906, 32.9326, 3.81029, 4.87755, 6.3012,
   7.86038, 10.0962, 12.856, 16.2433, 20.7189, 26.154, 1018.15, 644.892, 1283.94, 1271.41, 1258.55, 1197.47, 1203.09, 1230.19, 1165.28, 1045.29,
   543.89, 1031.44, 983.419, 930.405, 884.517, 850.462, 816.504, 773.506, 720.962, 509.849, 1303.19, 1316.28, 586.102, 636.38, 684.958, 733.31,
   765.19, 824.905, 867.38, 912.494, 1017.56, 968.393, 1235.94, 1236.76, 1193.23, 1188.23, 1144.35, 1109.01, 1069.97 };
   Double_t gr_exp68_errtot_felx3068[78] = { 0.3672, 0.05921, 0.337, 0.30111, 0.27395, 0.25043, 0.22595, 0.20628, 0.0967, 0.09199, 0.08644, 0.08967, 0.08128, 0.08093, 0.06826, 0.07294, 0.06467,
   0.06315, 0.05809, 1.0236, 0.020137, 2.1342, 1.9414, 1.7759, 1.6155, 1.4706, 1.3444, 1.2224, 1.1222, 0.40781, 0.9278, 0.848, 0.7687,
   0.7057, 0.6464, 0.589, 0.5327, 0.48784, 0.44557, 0.007403, 0.006069, 0.019183, 0.010305, 0.013392, 0.008336, 0.015034, 0.013384, 0.013291, 0.00466,
   0.04898, 0.011431, 0.006664, 0.003021, 0.010429, 0.008815, 0.008112, 0.008255, 0.004183, 0.05625, 0.01873, 0.013281, 0.04713, 0.0505, 0.03887, 0.04201,
   0.03974, 0.04186, 0.03818, 0.028531, 0.030639, 0.032739, 0.016607, 0.017037, 0.020147, 0.02607, 0.024938, 0.026891, 0.032076 };
   Double_t gr_exp68_errtot_fely3068[78] = { 1.807622, 24.30331, 2.278939, 2.852847, 3.626103, 4.538014, 5.631659, 6.968371, 8.166466, 8.985972, 10.1132, 11.03773, 12.23302, 13.72911, 15.34388, 16.52927, 18.29011,
   20.45645, 22.24626, 0.1285435, 89.63891, 0.01687457, 0.02272161, 0.02912444, 0.03634843, 0.04693505, 0.06154716, 0.07952608, 0.1006845, 1.422783, 0.1659074, 0.2117453, 0.2728559,
   0.3397915, 0.4354974, 0.553497, 0.6982437, 0.8892154, 1.121774, 82.07532, 71.76164, 90.52627, 90.91999, 91.25265, 88.18761, 89.88916, 93.40108, 90.10651, 82.48816,
   29.14542, 85.22257, 83.53276, 81.29495, 79.44554, 78.88477, 79.98685, 77.29092, 77.58516, 26.98353, 88.22216, 90.26542, 31.8003, 34.95951, 38.1013, 41.30534,
   43.65096, 47.65003, 50.74087, 54.05944, 61.82133, 58.09772, 82.64378, 81.61942, 77.19766, 75.90591, 72.19548, 69.09245, 65.82674 };
   Double_t gr_exp68_errtot_fehx3068[78] = { 0.3828, 0.06079, 0.353, 0.31889, 0.29605, 0.26957, 0.24405, 0.22372, 0.1033, 0.09801, 0.09356, 0.09033, 0.07872, 0.07907, 0.07174, 0.07706, 0.06533,
   0.06685, 0.06191, 1.0664, 0.019863, 2.2358, 2.0386, 1.8641, 1.6945, 1.5494, 1.4156, 1.2876, 1.1778, 0.42219, 0.9722, 0.892, 0.8113,
   0.7443, 0.6736, 0.611, 0.5573, 0.51216, 0.46443, 0.012597, 0.006931, 0.010817, 0.009695, 0.016608, 0.011664, 0.014966, 0.006616, 0.006709, 0.00534,
   0.05102, 0.008569, 0.003336, 0.006979, 0.009571, 0.001185, 0.001888, 0.001745, 0.005817, 0.05375, 0.02127, 0.016719, 0.05287, 0.0495, 0.04113, 0.04799,
   0.04026, 0.03814, 0.03182, 0.031469, 0.029361, 0.037261, 0.023393, 0.022963, 0.019853, 0.02393, 0.025062, 0.023109, 0.027924 };
   Double_t gr_exp68_errtot_fehy3068[78] = { 1.807622, 24.30331, 2.278939, 2.852847, 3.626103, 4.538014, 5.631659, 6.968371, 8.166466, 8.985972, 10.1132, 11.03773, 12.23302, 13.72911, 15.34388, 16.52927, 18.29011,
   20.45645, 22.24626, 0.1285435, 89.54306, 0.01687457, 0.02272161, 0.02912444, 0.03634843, 0.04693505, 0.06154716, 0.07952608, 0.1006845, 1.422783, 0.1659074, 0.2117453, 0.2728559,
   0.3397915, 0.4354974, 0.553497, 0.6982437, 0.8892154, 1.121774, 80.41438, 62.41757, 90.36723, 90.68842, 90.93945, 87.75287, 89.2992, 92.62245, 89.01961, 81.16708,
   29.14542, 82.8118, 80.48376, 77.66426, 75.2618, 73.91676, 73.72757, 69.64601, 69.28418, 26.98353, 88.17031, 90.19212, 31.8003, 34.95951, 38.1013, 41.30534,
   43.65096, 47.64983, 50.74018, 54.05775, 61.81635, 58.09464, 82.61184, 81.59396, 77.17857, 75.89198, 72.18404, 69.0832, 65.81948 };
   grae = new TGraphAsymmErrors(78,gr_exp68_errtot_fx3068,gr_exp68_errtot_fy3068,gr_exp68_errtot_felx3068,gr_exp68_errtot_fehx3068,gr_exp68_errtot_fely3068,gr_exp68_errtot_fehy3068);
   grae->SetName("gr_exp68_errtot");
   grae->SetTitle("PAMELA (2006/08-2006/09)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff6699");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff6699");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(26);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp68_errtot3068 = new TH1F("Graph_gr_exp68_errtot3068","PAMELA (2006/08-2006/09)",100,0.0738,53.6058);
   Graph_gr_exp68_errtot3068->SetMinimum(0.3022897);
   Graph_gr_exp68_errtot3068->SetMaximum(1547.086);
   Graph_gr_exp68_errtot3068->SetDirectory(nullptr);
   Graph_gr_exp68_errtot3068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp68_errtot3068->SetLineColor(ci);
   Graph_gr_exp68_errtot3068->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp68_errtot3068->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp68_errtot3068->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp68_errtot3068->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp68_errtot3068->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp68_errtot3068->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp68_errtot3068->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp68_errtot3068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp68_errtot3068);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp69_errtot_fx3069[78] = { 6.636, 5.9819, 5.3874, 4.843, 4.3486, 3.899, 3.5886, 3.3936, 3.2087, 3.0286, 2.8588, 2.6988, 2.549, 2.4038, 2.264, 2.134, 2.0091,
   1.889, 1.7741, 19.787, 46.503, 42.333, 38.527, 35.056, 31.894, 29.007, 26.375, 23.972, 21.779, 7.3554, 17.969, 16.31, 14.797,
   13.413, 12.155, 11.011, 9.9674, 9.0135, 8.1444, 0.1797, 0.3747, 0.3498, 0.3246, 0.2998, 0.2745, 0.2498, 0.2297, 0.2149, 0.1997,
   1.5692, 0.1649, 0.1549, 0.1396, 0.1249, 0.1148, 0.1048, 0.0974, 0.0882, 1.6692, 0.4447, 0.4095, 1.4691, 1.3794, 1.2942, 1.2093,
   1.1292, 1.0544, 0.9895, 0.9243, 0.7994, 0.7445, 0.6945, 0.6445, 0.5996, 0.5596, 0.5196, 0.4795, 0.8594 };
   Double_t gr_exp69_errtot_fy3069[78] = { 52.12, 65.27, 81.38, 99.15, 124.4, 151.4, 175, 195, 215, 239, 262, 286, 315, 347, 374, 412, 441,
   481, 520, 3.716, 0.3522, 0.4729, 0.6341, 0.8142, 1.038, 1.38, 1.713, 2.258, 2.892, 41.66, 4.792, 6.271, 7.859,
   10.01, 12.89, 16.4, 20.88, 26.26, 33.18, 1123, 1398, 1381, 1380, 1371, 1359, 1278, 1222, 1194, 1164,
   607, 1085, 1030, 960, 928, 893, 818, 759, 721, 562, 1396, 1410, 650, 708, 753, 813,
   860, 919, 964, 1003, 1125, 1173, 1220, 1254, 1300, 1328, 1349, 1391, 1064 };
   Double_t gr_exp69_errtot_felx3069[78] = { 0.336, 0.3019, 0.2774, 0.253, 0.2286, 0.209, 0.0986, 0.0936, 0.0887, 0.0886, 0.0788, 0.0788, 0.069, 0.0738, 0.064, 0.064, 0.0591,
   0.059, 0.0541, 0.927, 2.133, 1.943, 1.777, 1.616, 1.474, 1.347, 1.225, 1.122, 1.019, 0.3654, 0.849, 0.77, 0.707,
   0.643, 0.585, 0.531, 0.4874, 0.4435, 0.4044, 0.0097, 0.0147, 0.0098, 0.0146, 0.0098, 0.0145, 0.0098, 0.0097, 0.0049, 0.0097,
   0.0492, 0.0049, 0.0049, 0.0096, 0.0049, 0.0048, 0.0048, 0.0024, 0.0062, 0.0492, 0.0147, 0.0195, 0.0491, 0.0394, 0.0442, 0.0393,
   0.0392, 0.0344, 0.0295, 0.0343, 0.0294, 0.0245, 0.0245, 0.0245, 0.0196, 0.0196, 0.0196, 0.0195, 0.0294 };
   Double_t gr_exp69_errtot_fely3069[78] = { 2.319483, 2.927456, 3.622154, 4.428318, 5.632051, 6.935416, 8.062258, 9.055385, 10.04988, 11.04536, 12.16553, 14.14214, 15.13275, 17.11724, 19.10497, 21.09502, 23.08679,
   25.17936, 27.16616, 0.1649242, 0.017, 0.02193171, 0.02915476, 0.03640055, 0.04648656, 0.06103278, 0.07528612, 0.09945853, 0.1236932, 1.824829, 0.2061553, 0.2765863, 0.3373426,
   0.4275512, 0.559017, 0.7003571, 0.8926926, 1.118034, 1.414214, 82.86133, 71.06335, 72.27724, 73.4983, 74.72617, 75.69016, 76.92204, 78.16009, 79.12016, 81.60882,
   33.13608, 85.3815, 87.59566, 88.54377, 91.08238, 95.27329, 97.71898, 102.528, 104.9952, 30.14963, 69.857, 69.857, 35.22783, 39.20459, 42.19005, 46.17359,
   57.21888, 58.21512, 59.21149, 60.29925, 61.40033, 62.39391, 63.50591, 64.49806, 64.62971, 66.4906, 67.46851, 68.65858, 60.29925 };
   Double_t gr_exp69_errtot_fehx3069[78] = { 0.354, 0.3181, 0.2926, 0.267, 0.2414, 0.221, 0.1014, 0.0964, 0.0913, 0.0914, 0.0812, 0.0812, 0.071, 0.0762, 0.066, 0.066, 0.0609,
   0.061, 0.0559, 0.973, 2.237, 2.037, 1.863, 1.694, 1.546, 1.413, 1.285, 1.178, 1.071, 0.3846, 0.891, 0.81, 0.743,
   0.677, 0.615, 0.559, 0.5126, 0.4665, 0.4256, 0.0103, 0.0153, 0.0102, 0.0154, 0.0102, 0.0155, 0.0102, 0.0103, 0.0051, 0.0103,
   0.0508, 0.0051, 0.0051, 0.0104, 0.0051, 0.0052, 0.0052, 0.0026, 0.0068, 0.0508, 0.0153, 0.0205, 0.0509, 0.0406, 0.0458, 0.0407,
   0.0408, 0.0356, 0.0305, 0.0357, 0.0306, 0.0255, 0.0255, 0.0255, 0.0204, 0.0204, 0.0204, 0.0205, 0.0306 };
   Double_t gr_exp69_errtot_fehy3069[78] = { 2.319483, 2.927456, 3.622154, 4.428318, 5.632051, 6.935416, 8.062258, 9.055385, 10.04988, 11.04536, 12.16553, 14.14214, 15.13275, 17.11724, 19.10497, 21.09502, 23.08679,
   25.17936, 27.16616, 0.1649242, 0.017, 0.02193171, 0.02915476, 0.03640055, 0.04648656, 0.06103278, 0.07528612, 0.09945853, 0.1236932, 1.824829, 0.2061553, 0.2765863, 0.3373426,
   0.4275512, 0.559017, 0.7003571, 0.8926926, 1.118034, 1.414214, 89.56004, 98.47842, 98.65597, 99.82485, 100.02, 100.02, 96.31718, 93.62158, 92.64988, 91.21403,
   33.13608, 88.23265, 85.70298, 80.99383, 79.84986, 79.62412, 73.40981, 72.56032, 68.88396, 30.14963, 95.35198, 97.3242, 35.22783, 39.20459, 42.19005, 46.17359,
   49.25444, 53.23533, 57.21888, 60.29925, 69.35416, 73.33485, 77.41447, 80.399, 84.48077, 87.13208, 90.09439, 94.20191, 64.28063 };
   grae = new TGraphAsymmErrors(78,gr_exp69_errtot_fx3069,gr_exp69_errtot_fy3069,gr_exp69_errtot_felx3069,gr_exp69_errtot_fehx3069,gr_exp69_errtot_fely3069,gr_exp69_errtot_fehy3069);
   grae->SetName("gr_exp69_errtot");
   grae->SetTitle("PAMELA (2006/11-2006/12)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0033ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0033ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(32);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp69_errtot3069 = new TH1F("Graph_gr_exp69_errtot3069","PAMELA (2006/11-2006/12)",100,0.0738,53.6058);
   Graph_gr_exp69_errtot3069->SetMinimum(0.30168);
   Graph_gr_exp69_errtot3069->SetMaximum(1658.023);
   Graph_gr_exp69_errtot3069->SetDirectory(nullptr);
   Graph_gr_exp69_errtot3069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp69_errtot3069->SetLineColor(ci);
   Graph_gr_exp69_errtot3069->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp69_errtot3069->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp69_errtot3069->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp69_errtot3069->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp69_errtot3069->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp69_errtot3069->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp69_errtot3069->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp69_errtot3069->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp69_errtot3069);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp70_errtot_fx3070[78] = { 3.2087, 3.3936, 3.5886, 3.899, 4.3486, 4.843, 5.3874, 5.9819, 6.636, 3.0286, 2.8588, 1.0544, 2.6988, 2.549, 2.4038, 2.264, 2.134,
   2.0091, 1.889, 19.787, 46.503, 42.333, 38.527, 35.056, 31.894, 29.007, 26.375, 23.972, 21.779, 7.3554, 17.969, 16.31, 14.797,
   13.413, 12.155, 11.011, 9.9674, 9.0135, 8.1444, 0.1797, 0.3747, 0.3498, 0.3246, 0.2998, 0.2745, 0.2498, 0.2297, 0.2149, 0.1997,
   1.6692, 0.1649, 0.1549, 0.1396, 0.1249, 0.1148, 0.1048, 0.0974, 0.0882, 1.7741, 0.4447, 0.4095, 1.5692, 1.4691, 1.3794, 1.2942,
   1.2093, 1.1292, 0.9895, 0.9243, 0.7994, 0.8594, 0.4795, 0.5196, 0.5596, 0.5996, 0.6445, 0.6945, 0.7445 };
   Double_t gr_exp70_errtot_fy3070[78] = { 234, 210, 189, 163.3, 132, 106.8, 85.34, 68.61, 54.86, 258, 288, 1066, 318, 348, 377, 409, 450,
   501, 540, 3.796, 0.3367, 0.493, 0.6297, 0.8024, 1.056, 1.377, 1.738, 2.307, 2.932, 43.65, 4.908, 6.408, 7.972,
   10.34, 13.02, 16.71, 21.43, 26.8, 34.31, 1545, 1816, 1822, 1818, 1788, 1775, 1732, 1673, 1634, 1613,
   640, 1477, 1453, 1411, 1334, 1230, 1151, 1111, 1045, 590, 1754, 1778, 693, 748, 813, 860,
   934, 993, 1135, 1197, 1341, 1272, 1715, 1677, 1643, 1577, 1527, 1468, 1403 };
   Double_t gr_exp70_errtot_felx3070[78] = { 0.0887, 0.0936, 0.0986, 0.209, 0.2286, 0.253, 0.2774, 0.3019, 0.336, 0.0886, 0.0788, 0.0344, 0.0788, 0.069, 0.0738, 0.064, 0.064,
   0.0591, 0.059, 0.927, 2.133, 1.943, 1.777, 1.616, 1.474, 1.347, 1.225, 1.122, 1.019, 0.3654, 0.849, 0.77, 0.707,
   0.643, 0.585, 0.531, 0.4874, 0.4435, 0.4044, 0.0097, 0.0147, 0.0098, 0.0146, 0.0098, 0.0145, 0.0098, 0.0097, 0.0049, 0.0097,
   0.0492, 0.0049, 0.0049, 0.0096, 0.0049, 0.0048, 0.0048, 0.0024, 0.0062, 0.0541, 0.0147, 0.0195, 0.0492, 0.0491, 0.0394, 0.0442,
   0.0393, 0.0392, 0.0295, 0.0343, 0.0294, 0.0294, 0.0195, 0.0196, 0.0196, 0.0196, 0.0245, 0.0245, 0.0245 };
   Double_t gr_exp70_errtot_fely3070[78] = { 12.04159, 10.04988, 9.055385, 8.085468, 6.477605, 5.196156, 4.118069, 3.284291, 2.606851, 13.15295, 15.13275, 61.29437, 16.12452, 18.11077, 20.09975, 22.09072, 24.08319,
   27.16616, 30.14963, 0.1794666, 0.01745624, 0.02487094, 0.03138089, 0.03957963, 0.05150305, 0.06661178, 0.0835484, 0.1101297, 0.1393078, 2.059655, 0.2314273, 0.301364, 0.3742888,
   0.4843448, 0.6091119, 0.7803692, 0.9993874, 1.248868, 1.608686, 83.67795, 73.34848, 73.5459, 74.73286, 75.70997, 76.90254, 78.1025, 79.07591, 80.28076, 82.46211,
   36.12478, 85.86617, 88.0568, 89.56004, 91.76056, 94.92102, 97.80082, 102.489, 106.6068, 33.13608, 71.19691, 72.18033, 39.20459, 43.18565, 47.16991, 51.24451,
   56.22277, 60.20797, 62.28965, 62.39391, 64.38167, 63.3877, 70.03571, 69.05071, 68.88396, 67.74216, 66.61081, 65.62012, 65.49046 };
   Double_t gr_exp70_errtot_fehx3070[78] = { 0.0913, 0.0964, 0.1014, 0.221, 0.2414, 0.267, 0.2926, 0.3181, 0.354, 0.0914, 0.0812, 0.0356, 0.0812, 0.071, 0.0762, 0.066, 0.066,
   0.0609, 0.061, 0.973, 2.237, 2.037, 1.863, 1.694, 1.546, 1.413, 1.285, 1.178, 1.071, 0.3846, 0.891, 0.81, 0.743,
   0.677, 0.615, 0.559, 0.5126, 0.4665, 0.4256, 0.0103, 0.0153, 0.0102, 0.0154, 0.0102, 0.0155, 0.0102, 0.0103, 0.0051, 0.0103,
   0.0508, 0.0051, 0.0051, 0.0104, 0.0051, 0.0052, 0.0052, 0.0026, 0.0068, 0.0559, 0.0153, 0.0205, 0.0508, 0.0509, 0.0406, 0.0458,
   0.0407, 0.0408, 0.0305, 0.0357, 0.0306, 0.0306, 0.0205, 0.0204, 0.0204, 0.0204, 0.0255, 0.0255, 0.0255 };
   Double_t gr_exp70_errtot_fehy3070[78] = { 12.04159, 10.04988, 9.055385, 8.085468, 6.477605, 5.196156, 4.118069, 3.284291, 2.606851, 13.15295, 15.13275, 65.27634, 16.12452, 18.11077, 20.09975, 22.09072, 24.08319,
   27.16616, 30.14963, 0.1794666, 0.01745624, 0.02487094, 0.03138089, 0.03957963, 0.05150305, 0.06661178, 0.0835484, 0.1101297, 0.1393078, 2.059655, 0.2314273, 0.301364, 0.3742888,
   0.4843448, 0.6091119, 0.7803692, 0.9993874, 1.248868, 1.608686, 123.7942, 130.7517, 132.8495, 133.9589, 132.9662, 134.0821, 132.2309, 129.2594, 127.4245, 127.5774,
   36.12478, 120.0333, 119.2393, 117.686, 113.031, 105.513, 100.6876, 98.67117, 95.18929, 33.13608, 123.6851, 126.6689, 39.20459, 43.18565, 47.16991, 51.24451,
   56.22277, 60.20797, 70.25667, 75.32596, 86.28441, 80.30567, 119.6035, 115.6244, 111.5437, 105.4751, 101.4002, 96.42095, 91.35097 };
   grae = new TGraphAsymmErrors(78,gr_exp70_errtot_fx3070,gr_exp70_errtot_fy3070,gr_exp70_errtot_felx3070,gr_exp70_errtot_fehx3070,gr_exp70_errtot_fely3070,gr_exp70_errtot_fehy3070);
   grae->SetName("gr_exp70_errtot");
   grae->SetTitle("PAMELA (2007/11-2007/12)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cccc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cccc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(30);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp70_errtot3070 = new TH1F("Graph_gr_exp70_errtot3070","PAMELA (2007/11-2007/12)",100,0.0738,53.6058);
   Graph_gr_exp70_errtot3070->SetMinimum(0.2873194);
   Graph_gr_exp70_errtot3070->SetMaximum(2150.303);
   Graph_gr_exp70_errtot3070->SetDirectory(nullptr);
   Graph_gr_exp70_errtot3070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp70_errtot3070->SetLineColor(ci);
   Graph_gr_exp70_errtot3070->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp70_errtot3070->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp70_errtot3070->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp70_errtot3070->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp70_errtot3070->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp70_errtot3070->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp70_errtot3070->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp70_errtot3070->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp70_errtot3070);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp71_errtot_fx3071[78] = { 7.3554, 6.636, 5.9819, 5.3874, 4.843, 4.3486, 3.899, 3.5886, 3.3936, 3.2087, 3.0286, 2.8588, 2.6988, 2.549, 2.4038, 2.264, 2.134,
   2.0091, 1.889, 21.779, 1.7741, 46.503, 42.333, 38.527, 35.056, 31.894, 29.007, 26.375, 23.972, 8.1444, 19.787, 17.969, 16.31,
   14.797, 13.413, 12.155, 11.011, 9.9674, 9.0135, 0.1997, 0.4095, 0.3747, 0.3498, 0.3246, 0.2998, 0.2745, 0.2498, 0.2297, 0.2149,
   1.6692, 0.1797, 0.1649, 0.1549, 0.1396, 0.1249, 0.1148, 0.1048, 0.0974, 0.0882, 0.4795, 0.4447, 1.5692, 1.4691, 1.3794, 1.2942,
   1.2093, 1.1292, 1.0544, 0.9895, 0.8594, 0.7994, 0.7445, 0.6945, 0.6445, 0.5996, 0.5596, 0.5196, 0.9243 };
   Double_t gr_exp71_errtot_fy3071[78] = { 44.15, 55.6, 69.55, 86.97, 109.1, 134.3, 164.7, 194, 215, 239, 262, 291, 322, 356, 388, 428, 461,
   512, 562, 2.847, 612, 0.355, 0.4986, 0.6222, 0.8151, 1.015, 1.388, 1.735, 2.261, 34.65, 3.806, 4.915, 6.257,
   7.855, 10.28, 13.46, 16.77, 21.32, 27.12, 1865, 1983, 2019, 2036, 2040, 2025, 2047, 2031, 1968, 1899,
   670, 1805, 1727, 1675, 1607, 1543, 1477, 1401, 1332, 1191, 1941, 1959, 719, 782, 845, 903,
   983, 1041, 1127, 1192, 1357, 1431, 1510, 1587, 1641, 1731, 1789, 1844, 1273 };
   Double_t gr_exp71_errtot_felx3071[78] = { 0.3654, 0.336, 0.3019, 0.2774, 0.253, 0.2286, 0.209, 0.0986, 0.0936, 0.0887, 0.0886, 0.0788, 0.0788, 0.069, 0.0738, 0.064, 0.064,
   0.0591, 0.059, 1.019, 0.0541, 2.133, 1.943, 1.777, 1.616, 1.474, 1.347, 1.225, 1.122, 0.4044, 0.927, 0.849, 0.77,
   0.707, 0.643, 0.585, 0.531, 0.4874, 0.4435, 0.0097, 0.0195, 0.0147, 0.0098, 0.0146, 0.0098, 0.0145, 0.0098, 0.0097, 0.0049,
   0.0492, 0.0097, 0.0049, 0.0049, 0.0096, 0.0049, 0.0048, 0.0048, 0.0024, 0.0062, 0.0195, 0.0147, 0.0492, 0.0491, 0.0394, 0.0442,
   0.0393, 0.0392, 0.0344, 0.0295, 0.0294, 0.0294, 0.0245, 0.0245, 0.0245, 0.0196, 0.0196, 0.0196, 0.0343 };
   Double_t gr_exp71_errtot_fely3071[78] = { 2.282215, 2.889642, 3.635464, 4.574779, 5.774604, 7.162006, 8.84505, 10.19804, 12.16553, 13.15295, 14.14214, 16.12452, 18.11077, 20.22375, 22.2036, 24.18677, 27.16616,
   30.26549, 33.24154, 0.1497525, 36.22154, 0.02074729, 0.02830229, 0.03485853, 0.04494027, 0.05542387, 0.07465495, 0.09261286, 0.1196763, 1.783121, 0.1988992, 0.2558241, 0.3247487,
   0.4068174, 0.5306559, 0.6927729, 0.8619717, 1.093703, 1.38931, 85.16455, 75.50497, 75.70997, 76.90254, 77.87811, 79.07591, 80.28076, 81.49233, 82.71034, 83.67795,
   40.1995, 87.36132, 88.60023, 90.80198, 93.00538, 95.50916, 98.9798, 101.8332, 105.622, 109.7315, 73.34848, 74.33034, 44.28318, 48.25971, 52.34501, 56.32051,
   62.28965, 64.38167, 64.38167, 65.49046, 66.61081, 67.74216, 68.88396, 68.88396, 70.03571, 71.19691, 72.00694, 72.18033, 66.61081 };
   Double_t gr_exp71_errtot_fehx3071[78] = { 0.3846, 0.354, 0.3181, 0.2926, 0.267, 0.2414, 0.221, 0.1014, 0.0964, 0.0913, 0.0914, 0.0812, 0.0812, 0.071, 0.0762, 0.066, 0.066,
   0.0609, 0.061, 1.071, 0.0559, 2.237, 2.037, 1.863, 1.694, 1.546, 1.413, 1.285, 1.178, 0.4256, 0.973, 0.891, 0.81,
   0.743, 0.677, 0.615, 0.559, 0.5126, 0.4665, 0.0103, 0.0205, 0.0153, 0.0102, 0.0154, 0.0102, 0.0155, 0.0102, 0.0103, 0.0051,
   0.0508, 0.0103, 0.0051, 0.0051, 0.0104, 0.0051, 0.0052, 0.0052, 0.0026, 0.0068, 0.0205, 0.0153, 0.0508, 0.0509, 0.0406, 0.0458,
   0.0407, 0.0408, 0.0356, 0.0305, 0.0306, 0.0306, 0.0255, 0.0255, 0.0255, 0.0204, 0.0204, 0.0204, 0.0357 };
   Double_t gr_exp71_errtot_fehy3071[78] = { 2.282215, 2.889642, 3.635464, 4.574779, 5.774604, 7.162006, 8.84505, 10.19804, 12.16553, 13.15295, 14.14214, 16.12452, 18.11077, 20.22375, 22.2036, 24.18677, 27.16616,
   30.26549, 33.24154, 0.1497525, 36.22154, 0.02074729, 0.02830229, 0.03485853, 0.04494027, 0.05542387, 0.07465495, 0.09261286, 0.1196763, 1.783121, 0.1988992, 0.2558241, 0.3247487,
   0.4068174, 0.5306559, 0.6927729, 0.8619717, 1.093703, 1.38931, 151.7531, 146.7685, 150.8509, 153.9415, 155.9295, 156.0417, 160.1312, 160.2529, 157.4071, 153.4438,
   40.1995, 148.9463, 144.1839, 141.4107, 137.6735, 134.1715, 129.7575, 124.908, 120.8801, 110.6797, 140.6983, 143.6837, 44.28318, 48.25971, 52.34501, 56.32051,
   62.28965, 66.37017, 72.33948, 77.41447, 90.44888, 96.51943, 102.5914, 109.5536, 114.6298, 121.6963, 126.5701, 132.6386, 84.48077 };
   grae = new TGraphAsymmErrors(78,gr_exp71_errtot_fx3071,gr_exp71_errtot_fy3071,gr_exp71_errtot_felx3071,gr_exp71_errtot_fehx3071,gr_exp71_errtot_fely3071,gr_exp71_errtot_fehy3071);
   grae->SetName("gr_exp71_errtot");
   grae->SetTitle("PAMELA (2008/11-2008/12)");
   grae->SetFillStyle(0);
   grae->SetMarkerStyle(28);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp71_errtot3071 = new TH1F("Graph_gr_exp71_errtot3071","PAMELA (2008/11-2008/12)",100,0.0738,53.6058);
   Graph_gr_exp71_errtot3071->SetMinimum(0.3008274);
   Graph_gr_exp71_errtot3071->SetMaximum(2427.811);
   Graph_gr_exp71_errtot3071->SetDirectory(nullptr);
   Graph_gr_exp71_errtot3071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp71_errtot3071->SetLineColor(ci);
   Graph_gr_exp71_errtot3071->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp71_errtot3071->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp71_errtot3071->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp71_errtot3071->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp71_errtot3071->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp71_errtot3071->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp71_errtot3071->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp71_errtot3071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp71_errtot3071);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp72_errtot_fx3072[78] = { 3.2087, 3.3936, 3.5886, 1.7741, 4.3486, 4.843, 5.3874, 5.9819, 6.636, 3.0286, 2.8588, 2.6988, 2.549, 2.4038, 2.264, 2.134, 2.0091,
   1.889, 3.899, 19.787, 46.503, 42.333, 38.527, 35.056, 31.894, 29.007, 26.375, 23.972, 21.779, 7.3554, 17.969, 16.31, 14.797,
   13.413, 12.155, 11.011, 9.9674, 9.0135, 8.1444, 0.1797, 0.3747, 0.3498, 0.3246, 0.2998, 0.2745, 0.2498, 0.2297, 0.2149, 0.1997,
   1.5692, 0.1649, 0.1549, 0.1396, 0.1249, 0.1148, 0.1048, 0.0974, 0.0882, 1.6692, 0.4447, 1.4691, 1.3794, 1.2942, 1.2093, 1.1292,
   1.0544, 0.9895, 0.9243, 0.8594, 0.7445, 0.6945, 0.6445, 0.5996, 0.5596, 0.5196, 0.4795, 0.4095, 0.7994 };
   Double_t gr_exp72_errtot_fy3072[78] = { 251, 223, 204, 675, 141, 113, 91, 69, 56.69, 276, 303, 334, 390, 411, 450, 499, 547,
   605, 172, 3.842, 0.3699, 0.4738, 0.6151, 0.762, 1.095, 1.403, 1.835, 2.159, 2.876, 44.91, 4.739, 6.271, 8.339,
   10.22, 13.03, 16.86, 21.77, 27.44, 34.7, 2277, 2504, 2633, 2656, 2603, 2684, 2682, 2647, 2592, 2423,
   789, 2359, 2447, 2256, 2162, 2210, 2016, 1722, 1730, 720, 2495, 862, 931, 1030, 1105, 1178,
   1294, 1382, 1442, 1550, 1769, 1870, 1966, 2107, 2213, 2200, 2383, 2415, 1710 };
   Double_t gr_exp72_errtot_felx3072[78] = { 0.0887, 0.0936, 0.0986, 0.0541, 0.2286, 0.253, 0.2774, 0.3019, 0.336, 0.0886, 0.0788, 0.0788, 0.069, 0.0738, 0.064, 0.064, 0.0591,
   0.059, 0.209, 0.927, 2.133, 1.943, 1.777, 1.616, 1.474, 1.347, 1.225, 1.122, 1.019, 0.3654, 0.849, 0.77, 0.707,
   0.643, 0.585, 0.531, 0.4874, 0.4435, 0.4044, 0.0097, 0.0147, 0.0098, 0.0146, 0.0098, 0.0145, 0.0098, 0.0097, 0.0049, 0.0097,
   0.0492, 0.0049, 0.0049, 0.0096, 0.0049, 0.0048, 0.0048, 0.0024, 0.0062, 0.0492, 0.0147, 0.0491, 0.0394, 0.0442, 0.0393, 0.0392,
   0.0344, 0.0295, 0.0343, 0.0294, 0.0245, 0.0245, 0.0245, 0.0196, 0.0196, 0.0196, 0.0195, 0.0195, 0.0294 };
   Double_t gr_exp72_errtot_fely3072[78] = { 34.23449, 31.257, 28.28427, 94.53042, 19.10497, 15.13275, 12.04159, 9.055385, 7.75184, 38.32754, 42.29657, 46.27094, 54.33231, 57.31492, 62.39391, 69.46222, 76.41989,
   84.48077, 23.08679, 0.5332425, 0.0555331, 0.07015636, 0.08989168, 0.1104256, 0.1562958, 0.1987084, 0.2582244, 0.3029773, 0.4010765, 6.139908, 0.6564036, 0.8661548, 1.149289,
   1.407368, 1.789754, 2.311701, 2.980155, 3.75312, 4.745726, 182.2224, 160.6393, 162.7882, 165.0273, 165.9458, 169.1981, 172.1859, 174.591, 175.6417, 178.6309,
   110.5486, 188.8068, 195.686, 197.0913, 201.6581, 217.8302, 207.1714, 223.4636, 216.8363, 100.4988, 156.9235, 120.5985, 130.6484, 144.679, 155.8236, 142.0211,
   142.1443, 142.4114, 143.5444, 143.6941, 145.3444, 145.7155, 146.113, 147.5127, 152.4336, 153.1013, 155.4381, 158.2308, 144.1839 };
   Double_t gr_exp72_errtot_fehx3072[78] = { 0.0913, 0.0964, 0.1014, 0.0559, 0.2414, 0.267, 0.2926, 0.3181, 0.354, 0.0914, 0.0812, 0.0812, 0.071, 0.0762, 0.066, 0.066, 0.0609,
   0.061, 0.221, 0.973, 2.237, 2.037, 1.863, 1.694, 1.546, 1.413, 1.285, 1.178, 1.071, 0.3846, 0.891, 0.81, 0.743,
   0.677, 0.615, 0.559, 0.5126, 0.4665, 0.4256, 0.0103, 0.0153, 0.0102, 0.0154, 0.0102, 0.0155, 0.0102, 0.0103, 0.0051, 0.0103,
   0.0508, 0.0051, 0.0051, 0.0104, 0.0051, 0.0052, 0.0052, 0.0026, 0.0068, 0.0508, 0.0153, 0.0509, 0.0406, 0.0458, 0.0407, 0.0408,
   0.0356, 0.0305, 0.0357, 0.0306, 0.0255, 0.0255, 0.0255, 0.0204, 0.0204, 0.0204, 0.0205, 0.0205, 0.0306 };
   Double_t gr_exp72_errtot_fehy3072[78] = { 34.23449, 31.257, 28.28427, 94.53042, 19.10497, 15.13275, 12.04159, 9.055385, 7.75184, 38.32754, 42.29657, 46.27094, 54.33231, 57.31492, 62.39391, 69.46222, 76.41989,
   84.48077, 23.08679, 0.5332425, 0.0555331, 0.07015636, 0.08989168, 0.1104256, 0.1562958, 0.1987084, 0.2582244, 0.3029773, 0.4010765, 6.139908, 0.6564036, 0.8661548, 1.149289,
   1.407368, 1.789754, 2.311701, 2.980155, 3.75312, 4.745726, 355.9284, 372.082, 391.6746, 397.1461, 390.6635, 404.4008, 406.6362, 403.3981, 397.0453, 374.7706,
   110.5486, 371.295, 387.6958, 362.5052, 351.5252, 368.3707, 334.9701, 305.7859, 302.0017, 100.4988, 366.9387, 120.5985, 130.6484, 144.679, 155.8236, 166.8682,
   183.8831, 196.023, 205.078, 221.0973, 253.3377, 269.4587, 283.5913, 304.6851, 322.8947, 322.2235, 349.5154, 356.2611, 244.2826 };
   grae = new TGraphAsymmErrors(78,gr_exp72_errtot_fx3072,gr_exp72_errtot_fy3072,gr_exp72_errtot_felx3072,gr_exp72_errtot_fehx3072,gr_exp72_errtot_fely3072,gr_exp72_errtot_fehy3072);
   grae->SetName("gr_exp72_errtot");
   grae->SetTitle("PAMELA (2009/12-2010/01)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(27);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp72_errtot3072 = new TH1F("Graph_gr_exp72_errtot3072","PAMELA (2009/12-2010/01)",100,0.0738,53.6058);
   Graph_gr_exp72_errtot3072->SetMinimum(0.2829302);
   Graph_gr_exp72_errtot3072->SetMaximum(3397.468);
   Graph_gr_exp72_errtot3072->SetDirectory(nullptr);
   Graph_gr_exp72_errtot3072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp72_errtot3072->SetLineColor(ci);
   Graph_gr_exp72_errtot3072->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp72_errtot3072->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp72_errtot3072->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp72_errtot3072->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp72_errtot3072->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp72_errtot3072->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp72_errtot3072->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp72_errtot3072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp72_errtot3072);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp73_errtot_fx3073[8] = { 342.881, 11061.3, 5472.67, 2480.16, 1179.13, 650.417, 160.119, 77.614 };
   Double_t gr_exp73_errtot_fy3073[8] = { 0.00178, 2.29e-07, 1.32e-06, 9.98e-06, 6.31e-05, 0.000363, 0.0152, 0.121 };
   Double_t gr_exp73_errtot_felx3073[8] = { 92.881, 2461.3, 1472.67, 780.16, 279.13, 150.417, 60.119, 27.614 };
   Double_t gr_exp73_errtot_fely3073[8] = { 0.0003151587, 5.359888e-08, 2.293927e-07, 1.66031e-06, 9.988599e-06, 6.110491e-05, 0.002521983, 0.01313811 };
   Double_t gr_exp73_errtot_fehx3073[8] = { 157.119, 3938.7, 3127.33, 1519.84, 520.87, 249.583, 89.881, 22.386 };
   Double_t gr_exp73_errtot_fehy3073[8] = { 0.0003151587, 5.359888e-08, 2.293927e-07, 1.66031e-06, 9.988599e-06, 6.110491e-05, 0.002521983, 0.01313811 };
   grae = new TGraphAsymmErrors(8,gr_exp73_errtot_fx3073,gr_exp73_errtot_fy3073,gr_exp73_errtot_felx3073,gr_exp73_errtot_fehx3073,gr_exp73_errtot_fely3073,gr_exp73_errtot_fehy3073);
   grae->SetName("gr_exp73_errtot");
   grae->SetTitle("PAMELA-CALO (2006/06-2010/01)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp73_errtot3073 = new TH1F("Graph_gr_exp73_errtot3073","PAMELA-CALO (2006/06-2010/01)",100,45,16495);
   Graph_gr_exp73_errtot3073->SetMinimum(1.57861e-07);
   Graph_gr_exp73_errtot3073->SetMaximum(0.1475519);
   Graph_gr_exp73_errtot3073->SetDirectory(nullptr);
   Graph_gr_exp73_errtot3073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp73_errtot3073->SetLineColor(ci);
   Graph_gr_exp73_errtot3073->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp73_errtot3073->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp73_errtot3073->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp73_errtot3073->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp73_errtot3073->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp73_errtot3073->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp73_errtot3073->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp73_errtot3073->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp73_errtot3073);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp74_errtot_fx3074[11] = { 0.00854, 1.65, 1.07, 0.777, 0.562, 0.401, 0.0999, 0.0667, 0.032, 0.0169, 0.283 };
   Double_t gr_exp74_errtot_fy3074[11] = { 128, 314, 669, 843, 926, 940, 392, 193, 105, 100, 775 };
   Double_t gr_exp74_errtot_felx3074[11] = { 0.00197, 0.4, 0.15, 0.12, 0.081, 0.067, 0.0067, 0.0031, 0.0063, 0.0058, 0.043 };
   Double_t gr_exp74_errtot_fely3074[11] = { 30, 16, 33, 42, 46, 47, 61, 52, 25, 24, 39 };
   Double_t gr_exp74_errtot_fehx3074[11] = { 0.00255, 0.52, 0.18, 0.143, 0.095, 0.08, 0.0072, 0.0032, 0.0078, 0.0088, 0.051 };
   Double_t gr_exp74_errtot_fehy3074[11] = { 30, 16, 33, 42, 46, 47, 61, 52, 25, 24, 39 };
   grae = new TGraphAsymmErrors(11,gr_exp74_errtot_fx3074,gr_exp74_errtot_fy3074,gr_exp74_errtot_felx3074,gr_exp74_errtot_fehx3074,gr_exp74_errtot_fely3074,gr_exp74_errtot_fehy3074);
   grae->SetName("gr_exp74_errtot");
   grae->SetTitle("Pioneer8 (1968/04)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp74_errtot3074 = new TH1F("Graph_gr_exp74_errtot3074","Pioneer8 (1968/04)",100,0.005913,2.386343);
   Graph_gr_exp74_errtot3074->SetMinimum(68.4);
   Graph_gr_exp74_errtot3074->SetMaximum(1078.1);
   Graph_gr_exp74_errtot3074->SetDirectory(nullptr);
   Graph_gr_exp74_errtot3074->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp74_errtot3074->SetLineColor(ci);
   Graph_gr_exp74_errtot3074->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp74_errtot3074->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp74_errtot3074->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp74_errtot3074->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp74_errtot3074->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp74_errtot3074->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp74_errtot3074->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp74_errtot3074->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp74_errtot3074);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp75_errtot_fx3075[6] = { 34, 39.4, 46.2, 54.3, 69.7, 125.8 };
   Double_t gr_exp75_errtot_fy3075[6] = { 0.742, 0.468, 0.302, 0.172, 0.124, 0.0251 };
   Double_t gr_exp75_errtot_felx3075[6] = { 1.9, 3.2, 2.8, 4.7, 9.4, 41.2 };
   Double_t gr_exp75_errtot_fely3075[6] = { 0.2544, 0.1426, 0.0984, 0.0554, 0.0358, 0.00712 };
   Double_t gr_exp75_errtot_fehx3075[6] = { 2.2, 4, 3.4, 6, 14.9, 74.2 };
   Double_t gr_exp75_errtot_fehy3075[6] = { 0.2544, 0.1426, 0.0984, 0.0554, 0.0358, 0.00712 };
   grae = new TGraphAsymmErrors(6,gr_exp75_errtot_fx3075,gr_exp75_errtot_fy3075,gr_exp75_errtot_felx3075,gr_exp75_errtot_fehx3075,gr_exp75_errtot_fely3075,gr_exp75_errtot_fehy3075);
   grae->SetName("gr_exp75_errtot");
   grae->SetTitle("RICH-II (1997/10)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp75_errtot3075 = new TH1F("Graph_gr_exp75_errtot3075","RICH-II (1997/10)",100,15.31,216.79);
   Graph_gr_exp75_errtot3075->SetMinimum(0.016182);
   Graph_gr_exp75_errtot3075->SetMaximum(1.094242);
   Graph_gr_exp75_errtot3075->SetDirectory(nullptr);
   Graph_gr_exp75_errtot3075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp75_errtot3075->SetLineColor(ci);
   Graph_gr_exp75_errtot3075->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp75_errtot3075->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp75_errtot3075->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp75_errtot3075->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp75_errtot3075->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp75_errtot3075->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp75_errtot3075->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp75_errtot3075->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp75_errtot3075);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp76_errtot_fx3076[8] = { 22400, 1500000, 450000, 179000, 75000, 37600, 14100, 8910 };
   Double_t gr_exp76_errtot_fy3076[8] = { 1.48e-08, 3.51e-13, 6.19e-12, 6e-11, 5.86e-10, 3.3e-09, 5.17e-08, 1.87e-07 };
   Double_t gr_exp76_errtot_felx3076[8] = { 4600, 788000, 164000, 67000, 24900, 9400, 2900, 1830 };
   Double_t gr_exp76_errtot_fely3076[8] = { 1.76e-09, 2.91e-13, 3.34e-12, 1.73e-11, 9.02e-11, 3.68e-10, 6.02e-09, 2.14e-08 };
   Double_t gr_exp76_errtot_fehx3076[8] = { 5800, 1670000, 258000, 107000, 37000, 12500, 3700, 2290 };
   Double_t gr_exp76_errtot_fehy3076[8] = { 1.76e-09, 8.09e-13, 5.98e-12, 1.73e-11, 9.02e-11, 3.68e-10, 6.02e-09, 2.14e-08 };
   grae = new TGraphAsymmErrors(8,gr_exp76_errtot_fx3076,gr_exp76_errtot_fy3076,gr_exp76_errtot_felx3076,gr_exp76_errtot_fehx3076,gr_exp76_errtot_fely3076,gr_exp76_errtot_fehy3076);
   grae->SetName("gr_exp76_errtot");
   grae->SetTitle("RUNJOB (1995+1996+1997+1999)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cc00ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cc00ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp76_errtot3076 = new TH1F("Graph_gr_exp76_errtot3076","RUNJOB (1995+1996+1997+1999)",100,6372,3486292);
   Graph_gr_exp76_errtot3076->SetMinimum(5.4e-14);
   Graph_gr_exp76_errtot3076->SetMaximum(2.2924e-07);
   Graph_gr_exp76_errtot3076->SetDirectory(nullptr);
   Graph_gr_exp76_errtot3076->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp76_errtot3076->SetLineColor(ci);
   Graph_gr_exp76_errtot3076->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp76_errtot3076->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp76_errtot3076->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp76_errtot3076->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp76_errtot3076->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp76_errtot3076->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp76_errtot3076->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp76_errtot3076->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp76_errtot3076);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp77_errtot_fx3077[13] = { 3600, 170000, 85000, 74000, 42000, 28000, 26000, 18000, 14000, 13000, 7100, 4500, 2850 };
   Double_t gr_exp77_errtot_fy3077[13] = { 2.64e-06, 8.06e-11, 4.89e-10, 7.59e-10, 2.71e-09, 1.06e-08, 1.12e-08, 1.7e-08, 7.8e-08, 6.23e-08, 5.77e-07, 1.88e-06, 7.84e-06 };
   Double_t gr_exp77_errtot_felx3077[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp77_errtot_fely3077[13] = { 2.22e-07, 7.22e-11, 2.66e-10, 3.56e-10, 9.4e-10, 2.97e-09, 2.94e-09, 4.6e-09, 1.5e-08, 1.14e-08, 3.53e-08, 1.21e-07, 5.77e-07 };
   Double_t gr_exp77_errtot_fehx3077[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp77_errtot_fehy3077[13] = { 2.22e-07, 8.06e-11, 2.66e-10, 3.56e-10, 9.4e-10, 2.97e-09, 2.94e-09, 4.6e-09, 1.5e-08, 1.14e-08, 3.53e-08, 1.21e-07, 5.77e-07 };
   grae = new TGraphAsymmErrors(13,gr_exp77_errtot_fx3077,gr_exp77_errtot_fy3077,gr_exp77_errtot_felx3077,gr_exp77_errtot_fehx3077,gr_exp77_errtot_fely3077,gr_exp77_errtot_fehy3077);
   grae->SetName("gr_exp77_errtot");
   grae->SetTitle("SOKOL (1984/03-1986/01)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff66ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff66ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(29);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp77_errtot3077 = new TH1F("Graph_gr_exp77_errtot3077","SOKOL (1984/03-1986/01)",100,2565,186715);
   Graph_gr_exp77_errtot3077->SetMinimum(7.56e-12);
   Graph_gr_exp77_errtot3077->SetMaximum(9.258699e-06);
   Graph_gr_exp77_errtot3077->SetDirectory(nullptr);
   Graph_gr_exp77_errtot3077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp77_errtot3077->SetLineColor(ci);
   Graph_gr_exp77_errtot3077->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp77_errtot3077->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp77_errtot3077->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp77_errtot3077->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp77_errtot3077->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp77_errtot3077->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp77_errtot3077->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp77_errtot3077->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp77_errtot3077);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp78_errtot_fx3078[6] = { 0.053, 0.087, 0.122, 0.222, 1.083, 3.48 };
   Double_t gr_exp78_errtot_fy3078[6] = { 68, 54, 81, 250, 340, 100 };
   Double_t gr_exp78_errtot_felx3078[6] = { 0.018, 0.012, 0.022, 0.082, 0.783, 1.03 };
   Double_t gr_exp78_errtot_fely3078[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp78_errtot_fehx3078[6] = { 0.017, 0.013, 0.018, 0.078, 1.367, 1.52 };
   Double_t gr_exp78_errtot_fehy3078[6] = { 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(6,gr_exp78_errtot_fx3078,gr_exp78_errtot_fy3078,gr_exp78_errtot_felx3078,gr_exp78_errtot_fehx3078,gr_exp78_errtot_fely3078,gr_exp78_errtot_fehy3078);
   grae->SetName("gr_exp78_errtot");
   grae->SetTitle("Ulysses-KET (1990/10-1991/02)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#999999");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#999999");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp78_errtot3078 = new TH1F("Graph_gr_exp78_errtot3078","Ulysses-KET (1990/10-1991/02)",100,0.0315,5.4965);
   Graph_gr_exp78_errtot3078->SetMinimum(25.4);
   Graph_gr_exp78_errtot3078->SetMaximum(368.6);
   Graph_gr_exp78_errtot3078->SetDirectory(nullptr);
   Graph_gr_exp78_errtot3078->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp78_errtot3078->SetLineColor(ci);
   Graph_gr_exp78_errtot3078->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp78_errtot3078->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp78_errtot3078->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp78_errtot3078->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp78_errtot3078->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp78_errtot3078->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp78_errtot3078->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp78_errtot3078->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp78_errtot3078);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp79_errtot_fx3079[6] = { 0.053, 3.48, 1.083, 0.122, 0.087, 0.222 };
   Double_t gr_exp79_errtot_fy3079[6] = { 150, 130, 720, 300, 180, 570 };
   Double_t gr_exp79_errtot_felx3079[6] = { 0.018, 1.03, 0.783, 0.022, 0.012, 0.082 };
   Double_t gr_exp79_errtot_fely3079[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp79_errtot_fehx3079[6] = { 0.017, 1.52, 1.367, 0.018, 0.013, 0.078 };
   Double_t gr_exp79_errtot_fehy3079[6] = { 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(6,gr_exp79_errtot_fx3079,gr_exp79_errtot_fy3079,gr_exp79_errtot_felx3079,gr_exp79_errtot_fehx3079,gr_exp79_errtot_fely3079,gr_exp79_errtot_fehy3079);
   grae->SetName("gr_exp79_errtot");
   grae->SetTitle("Ulysses-KET (1992/07-1992/10)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#990000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#990000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(34);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp79_errtot3079 = new TH1F("Graph_gr_exp79_errtot3079","Ulysses-KET (1992/07-1992/10)",100,0.0315,5.4965);
   Graph_gr_exp79_errtot3079->SetMinimum(71);
   Graph_gr_exp79_errtot3079->SetMaximum(779);
   Graph_gr_exp79_errtot3079->SetDirectory(nullptr);
   Graph_gr_exp79_errtot3079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp79_errtot3079->SetLineColor(ci);
   Graph_gr_exp79_errtot3079->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp79_errtot3079->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp79_errtot3079->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp79_errtot3079->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp79_errtot3079->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp79_errtot3079->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp79_errtot3079->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp79_errtot3079->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp79_errtot3079);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp80_errtot_fx3080[6] = { 0.053, 0.087, 0.122, 0.222, 1.083, 3.48 };
   Double_t gr_exp80_errtot_fy3080[6] = { 270, 400, 610, 840, 950, 150 };
   Double_t gr_exp80_errtot_felx3080[6] = { 0.018, 0.012, 0.022, 0.082, 0.783, 1.03 };
   Double_t gr_exp80_errtot_fely3080[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp80_errtot_fehx3080[6] = { 0.017, 0.013, 0.018, 0.078, 1.367, 1.52 };
   Double_t gr_exp80_errtot_fehy3080[6] = { 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(6,gr_exp80_errtot_fx3080,gr_exp80_errtot_fy3080,gr_exp80_errtot_felx3080,gr_exp80_errtot_fehx3080,gr_exp80_errtot_fely3080,gr_exp80_errtot_fehy3080);
   grae->SetName("gr_exp80_errtot");
   grae->SetTitle("Ulysses-KET (1993/07-1993/10)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cccc");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp80_errtot3080 = new TH1F("Graph_gr_exp80_errtot3080","Ulysses-KET (1993/07-1993/10)",100,0.0315,5.4965);
   Graph_gr_exp80_errtot3080->SetMinimum(70);
   Graph_gr_exp80_errtot3080->SetMaximum(1030);
   Graph_gr_exp80_errtot3080->SetDirectory(nullptr);
   Graph_gr_exp80_errtot3080->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp80_errtot3080->SetLineColor(ci);
   Graph_gr_exp80_errtot3080->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp80_errtot3080->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp80_errtot3080->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp80_errtot3080->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp80_errtot3080->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp80_errtot3080->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp80_errtot3080->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp80_errtot3080->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp80_errtot3080);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp81_errtot_fx3081[6] = { 0.053, 3.48, 1.083, 0.222, 0.122, 0.087 };
   Double_t gr_exp81_errtot_fy3081[6] = { 370, 160, 1180, 1070, 860, 570 };
   Double_t gr_exp81_errtot_felx3081[6] = { 0.018, 1.03, 0.783, 0.082, 0.022, 0.012 };
   Double_t gr_exp81_errtot_fely3081[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp81_errtot_fehx3081[6] = { 0.017, 1.52, 1.367, 0.078, 0.018, 0.013 };
   Double_t gr_exp81_errtot_fehy3081[6] = { 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(6,gr_exp81_errtot_fx3081,gr_exp81_errtot_fy3081,gr_exp81_errtot_felx3081,gr_exp81_errtot_fehx3081,gr_exp81_errtot_fely3081,gr_exp81_errtot_fehy3081);
   grae->SetName("gr_exp81_errtot");
   grae->SetTitle("Ulysses-KET (1994/07-1994/10)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#33ff00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#33ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(5);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp81_errtot3081 = new TH1F("Graph_gr_exp81_errtot3081","Ulysses-KET (1994/07-1994/10)",100,0.0315,5.4965);
   Graph_gr_exp81_errtot3081->SetMinimum(58);
   Graph_gr_exp81_errtot3081->SetMaximum(1282);
   Graph_gr_exp81_errtot3081->SetDirectory(nullptr);
   Graph_gr_exp81_errtot3081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp81_errtot3081->SetLineColor(ci);
   Graph_gr_exp81_errtot3081->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp81_errtot3081->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp81_errtot3081->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp81_errtot3081->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp81_errtot3081->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp81_errtot3081->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp81_errtot3081->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp81_errtot3081->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp81_errtot3081);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp82_errtot_fx3082[9] = { 0.3627, 0.3379, 0.3118, 0.287, 0.2376, 0.2121, 0.1871, 0.162, 0.2617 };
   Double_t gr_exp82_errtot_fy3082[9] = { 3932.7, 4014.9, 4078, 4337.9, 5384, 5248.9, 5848.1, 5940.8, 4832.7 };
   Double_t gr_exp82_errtot_felx3082[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp82_errtot_fely3082[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp82_errtot_fehx3082[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp82_errtot_fehy3082[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(9,gr_exp82_errtot_fx3082,gr_exp82_errtot_fy3082,gr_exp82_errtot_felx3082,gr_exp82_errtot_fehx3082,gr_exp82_errtot_fely3082,gr_exp82_errtot_fehy3082);
   grae->SetName("gr_exp82_errtot");
   grae->SetTitle("Voyager1 (2008/05)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff6699");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff6699");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp82_errtot3082 = new TH1F("Graph_gr_exp82_errtot3082","Voyager1 (2008/05)",100,0.14193,0.38277);
   Graph_gr_exp82_errtot3082->SetMinimum(3731.89);
   Graph_gr_exp82_errtot3082->SetMaximum(6141.61);
   Graph_gr_exp82_errtot3082->SetDirectory(nullptr);
   Graph_gr_exp82_errtot3082->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp82_errtot3082->SetLineColor(ci);
   Graph_gr_exp82_errtot3082->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp82_errtot3082->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp82_errtot3082->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp82_errtot3082->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp82_errtot3082->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp82_errtot3082->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp82_errtot3082->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp82_errtot3082->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp82_errtot3082);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp83_errtot_fx3083[19] = { 0.03464, 0.30569, 0.244, 0.20343, 0.18118, 0.16459, 0.14345, 0.07893, 0.05231, 0.04382, 0.02587, 0.01998, 0.01655, 0.01399, 0.01148, 0.00896, 0.00695,
   0.00534, 0.00371 };
   Double_t gr_exp83_errtot_fy3083[19] = { 27270, 10710, 13620, 14920, 16940, 18360, 19140, 23320, 25700, 26290, 27710, 31380, 32280, 29020, 24590, 28810, 22390,
   21040, 20060 };
   Double_t gr_exp83_errtot_felx3083[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0 };
   Double_t gr_exp83_errtot_fely3083[19] = { 758.5, 279, 389.6, 501.6, 853.6, 712.9, 692.1, 1675, 855.7, 864.8, 840, 1155, 1518, 1467, 1349, 1461, 321,
   311, 304 };
   Double_t gr_exp83_errtot_fehx3083[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0 };
   Double_t gr_exp83_errtot_fehy3083[19] = { 779.9, 279, 389.6, 501.6, 853.6, 712.9, 692.1, 1675, 884.6, 893.7, 865.9, 1198, 1591, 1543, 1425, 1536, 326,
   316, 308 };
   grae = new TGraphAsymmErrors(19,gr_exp83_errtot_fx3083,gr_exp83_errtot_fy3083,gr_exp83_errtot_felx3083,gr_exp83_errtot_fehx3083,gr_exp83_errtot_fely3083,gr_exp83_errtot_fehy3083);
   grae->SetName("gr_exp83_errtot");
   grae->SetTitle("Voyager1 (2012/10-2012/12)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0033ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0033ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp83_errtot3083 = new TH1F("Graph_gr_exp83_errtot3083","Voyager1 (2012/10-2012/12)",100,0.003339,0.335888);
   Graph_gr_exp83_errtot3083->SetMinimum(8087);
   Graph_gr_exp83_errtot3083->SetMaximum(36215);
   Graph_gr_exp83_errtot3083->SetDirectory(nullptr);
   Graph_gr_exp83_errtot3083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp83_errtot3083->SetLineColor(ci);
   Graph_gr_exp83_errtot3083->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp83_errtot3083->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp83_errtot3083->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp83_errtot3083->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp83_errtot3083->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp83_errtot3083->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp83_errtot3083->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp83_errtot3083->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp83_errtot3083);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp84_errtot_fx3084[7] = { 0.308, 0.1439, 0.2453, 0.2041, 0.1649, 0.0791, 0.1813 };
   Double_t gr_exp84_errtot_fy3084[7] = { 10420, 19270, 12890, 14920, 18200, 24430, 16520 };
   Double_t gr_exp84_errtot_felx3084[7] = { 0.038, 0.0111, 0.0248, 0.0164, 0.01, 0.0046, 0.0064 };
   Double_t gr_exp84_errtot_fely3084[7] = { 738.646, 1368.831, 914.2225, 1059.183, 1293.811, 1756.704, 1178.795 };
   Double_t gr_exp84_errtot_fehx3084[7] = { 0.038, 0.011, 0.0247, 0.0164, 0.01, 0.0046, 0.0064 };
   Double_t gr_exp84_errtot_fehy3084[7] = { 738.646, 1368.831, 914.2225, 1059.183, 1293.811, 1756.704, 1178.795 };
   grae = new TGraphAsymmErrors(7,gr_exp84_errtot_fx3084,gr_exp84_errtot_fy3084,gr_exp84_errtot_felx3084,gr_exp84_errtot_fehx3084,gr_exp84_errtot_fely3084,gr_exp84_errtot_fehy3084);
   grae->SetName("gr_exp84_errtot");
   grae->SetTitle("Voyager1-HET (2012/12-2015/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cccc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cccc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(26);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp84_errtot3084 = new TH1F("Graph_gr_exp84_errtot3084","Voyager1-HET (2012/12-2015/06)",100,0.04735,0.37315);
   Graph_gr_exp84_errtot3084->SetMinimum(8030.819);
   Graph_gr_exp84_errtot3084->SetMaximum(27837.24);
   Graph_gr_exp84_errtot3084->SetDirectory(nullptr);
   Graph_gr_exp84_errtot3084->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp84_errtot3084->SetLineColor(ci);
   Graph_gr_exp84_errtot3084->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp84_errtot3084->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp84_errtot3084->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp84_errtot3084->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp84_errtot3084->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp84_errtot3084->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp84_errtot3084->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp84_errtot3084->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp84_errtot3084);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp85_errtot_fx3085[5] = { 0.0102, 0.0154, 0.0239, 0.039, 0.052 };
   Double_t gr_exp85_errtot_fy3085[5] = { 26650, 29680, 29090, 28290, 29140 };
   Double_t gr_exp85_errtot_felx3085[5] = { 0.0025, 0.0026, 0.006, 0.009, 0.004 };
   Double_t gr_exp85_errtot_fely3085[5] = { 1893.651, 2107.195, 2060.514, 2003.943, 2068.302 };
   Double_t gr_exp85_errtot_fehx3085[5] = { 0.0026, 0.0025, 0.0061, 0.009, 0.004 };
   Double_t gr_exp85_errtot_fehy3085[5] = { 1893.651, 2107.195, 2060.514, 2003.943, 2068.302 };
   grae = new TGraphAsymmErrors(5,gr_exp85_errtot_fx3085,gr_exp85_errtot_fy3085,gr_exp85_errtot_felx3085,gr_exp85_errtot_fehx3085,gr_exp85_errtot_fely3085,gr_exp85_errtot_fehy3085);
   grae->SetName("gr_exp85_errtot");
   grae->SetTitle("Voyager1-HET-Aend (2012/12-2015/06)");
   grae->SetFillStyle(0);
   grae->SetMarkerStyle(32);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp85_errtot3085 = new TH1F("Graph_gr_exp85_errtot3085","Voyager1-HET-Aend (2012/12-2015/06)",100,0.00287,0.06083);
   Graph_gr_exp85_errtot3085->SetMinimum(24053.26);
   Graph_gr_exp85_errtot3085->SetMaximum(32490.28);
   Graph_gr_exp85_errtot3085->SetDirectory(nullptr);
   Graph_gr_exp85_errtot3085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp85_errtot3085->SetLineColor(ci);
   Graph_gr_exp85_errtot3085->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp85_errtot3085->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp85_errtot3085->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp85_errtot3085->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp85_errtot3085->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp85_errtot3085->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp85_errtot3085->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp85_errtot3085->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp85_errtot3085);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp86_errtot_fx3086[3] = { 0.0054, 0.0069, 0.0038 };
   Double_t gr_exp86_errtot_fy3086[3] = { 21160, 23690, 19080 };
   Double_t gr_exp86_errtot_felx3086[3] = { 0.0008, 0.0007, 0.0008 };
   Double_t gr_exp86_errtot_fely3086[3] = { 1498.361, 1677.26, 1351.424 };
   Double_t gr_exp86_errtot_fehx3086[3] = { 0.0008, 0.0008, 0.0008 };
   Double_t gr_exp86_errtot_fehy3086[3] = { 1498.361, 1677.26, 1351.424 };
   grae = new TGraphAsymmErrors(3,gr_exp86_errtot_fx3086,gr_exp86_errtot_fy3086,gr_exp86_errtot_felx3086,gr_exp86_errtot_fehx3086,gr_exp86_errtot_fely3086,gr_exp86_errtot_fehy3086);
   grae->SetName("gr_exp86_errtot");
   grae->SetTitle("Voyager1-LET (2012/12-2015/06)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(30);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp86_errtot3086 = new TH1F("Graph_gr_exp86_errtot3086","Voyager1-LET (2012/12-2015/06)",100,0.00253,0.00817);
   Graph_gr_exp86_errtot3086->SetMinimum(16964.71);
   Graph_gr_exp86_errtot3086->SetMaximum(26131.13);
   Graph_gr_exp86_errtot3086->SetDirectory(nullptr);
   Graph_gr_exp86_errtot3086->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp86_errtot3086->SetLineColor(ci);
   Graph_gr_exp86_errtot3086->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp86_errtot3086->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp86_errtot3086->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp86_errtot3086->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp86_errtot3086->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp86_errtot3086->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp86_errtot3086->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp86_errtot3086->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp86_errtot3086);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp87_errtot_fx3087[16] = { 0.1626, 0.3061, 0.2587, 0.2261, 0.2008, 0.1821, 0.1418, 0.07914, 0.03795, 0.02317, 0.01514, 0.009928, 0.006909, 0.00534, 0.003715, 0.05185 };
   Double_t gr_exp87_errtot_fy3087[16] = { 18380, 11760, 12380, 14710, 15730, 16660, 20020, 21840, 31590, 31960, 29670, 27590, 23600, 22410, 19490, 27630 };
   Double_t gr_exp87_errtot_felx3087[16] = { 0.0084, 0.0338, 0.013, 0.0179, 0.0072, 0.0108, 0.0115, 0.00328, 0.00795, 0.00527, 0.00234, 0.002228, 0.000709, 0.00074, 0.000715, 0.00385 };
   Double_t gr_exp87_errtot_fely3087[16] = { 403.8, 157.8, 265.8, 243.9, 405.7, 336.8, 356.8, 994.9, 294.6, 339.5, 494.7, 476.5, 512.6, 483.7, 451, 448 };
   Double_t gr_exp87_errtot_fehx3087[16] = { 0.0087, 0.0379, 0.0136, 0.0196, 0.0074, 0.0115, 0.0124, 0.00342, 0.01005, 0.00683, 0.00276, 0.002872, 0.000791, 0.00086, 0.000885, 0.00415 };
   Double_t gr_exp87_errtot_fehy3087[16] = { 403.8, 157.8, 265.8, 243.9, 405.7, 336.8, 356.8, 994.9, 294.6, 339.5, 494.7, 476.5, 512.6, 483.7, 451, 448 };
   grae = new TGraphAsymmErrors(16,gr_exp87_errtot_fx3087,gr_exp87_errtot_fy3087,gr_exp87_errtot_felx3087,gr_exp87_errtot_fehx3087,gr_exp87_errtot_fely3087,gr_exp87_errtot_fehy3087);
   grae->SetName("gr_exp87_errtot");
   grae->SetTitle("Voyager2 (2019/03-2019/07)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(28);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp87_errtot3087 = new TH1F("Graph_gr_exp87_errtot3087","Voyager2 (2019/03-2019/07)",100,0.0027,0.3781);
   Graph_gr_exp87_errtot3087->SetMinimum(9532.47);
   Graph_gr_exp87_errtot3087->SetMaximum(34369.23);
   Graph_gr_exp87_errtot3087->SetDirectory(nullptr);
   Graph_gr_exp87_errtot3087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp87_errtot3087->SetLineColor(ci);
   Graph_gr_exp87_errtot3087->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp87_errtot3087->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp87_errtot3087->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp87_errtot3087->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp87_errtot3087->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp87_errtot3087->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp87_errtot3087->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp87_errtot3087->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp87_errtot3087);
   
   multigraph->Add(grae,"p");
   
   Double_t gr_exp88_errtot_fx3088[15] = { 0.5472, 0.4181, 0.326, 0.2612, 0.2203, 0.1737, 0.146, 0.1084, 0.0936, 0.0628, 0.0492, 0.0349, 0.0218, 0.0132, 0.0081668 };
   Double_t gr_exp88_errtot_fy3088[15] = { 311.18, 342.39, 413.66, 457.62, 482.55, 474.62, 470.65, 391.16, 427.06, 615.22, 767.5, 964.96, 1055.56, 733.2, 399.4 };
   Double_t gr_exp88_errtot_felx3088[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp88_errtot_fely3088[15] = { 9.28, 11.15, 12.33, 16.17, 19.73, 14.16, 14.03, 17.08, 13.91, 25.13, 17.75, 12.95, 31.48, 27.98, 14.11 };
   Double_t gr_exp88_errtot_fehx3088[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t gr_exp88_errtot_fehy3088[15] = { 9.28, 11.15, 12.33, 16.17, 19.73, 14.16, 14.03, 17.08, 13.91, 25.13, 17.75, 12.95, 31.48, 27.98, 14.11 };
   grae = new TGraphAsymmErrors(15,gr_exp88_errtot_fx3088,gr_exp88_errtot_fy3088,gr_exp88_errtot_felx3088,gr_exp88_errtot_fehx3088,gr_exp88_errtot_fely3088,gr_exp88_errtot_fehy3088);
   grae->SetName("gr_exp88_errtot");
   grae->SetTitle("Voyager2-HET (1986/01-1987/12)");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#00cc00");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(27);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gr_exp88_errtot3088 = new TH1F("Graph_gr_exp88_errtot3088","Voyager2-HET (1986/01-1987/12)",100,0.00735012,0.6011033);
   Graph_gr_exp88_errtot3088->SetMinimum(223.386);
   Graph_gr_exp88_errtot3088->SetMaximum(1165.554);
   Graph_gr_exp88_errtot3088->SetDirectory(nullptr);
   Graph_gr_exp88_errtot3088->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr_exp88_errtot3088->SetLineColor(ci);
   Graph_gr_exp88_errtot3088->GetXaxis()->SetLabelFont(42);
   Graph_gr_exp88_errtot3088->GetXaxis()->SetTitleOffset(1);
   Graph_gr_exp88_errtot3088->GetXaxis()->SetTitleFont(42);
   Graph_gr_exp88_errtot3088->GetYaxis()->SetLabelFont(42);
   Graph_gr_exp88_errtot3088->GetYaxis()->SetTitleFont(42);
   Graph_gr_exp88_errtot3088->GetZaxis()->SetLabelFont(42);
   Graph_gr_exp88_errtot3088->GetZaxis()->SetTitleOffset(1);
   Graph_gr_exp88_errtot3088->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gr_exp88_errtot3088);
   
   multigraph->Add(grae,"p");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetLimits(0.0018, 3328500);
   multigraph->GetXaxis()->SetTitle("E_{k/n} [GeV]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.055);
   multigraph->GetXaxis()->SetTitleOffset(1.1);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("^{}H  [GeV m^{2} s sr]^{-1}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(0.975);
   multigraph->GetYaxis()->SetTitleFont(132);
   TText *text = new TText(0.115,0.96,"(http://lpsc.in2p3.fr/crdb)");
   text->SetNDC();
   text->SetTextFont(92);
   text->SetTextSize(0.0375);
   text->Draw();
   data_pad->Modified();
   crdb_extracted->cd();
  
// ------------>Primitives in pad: logo_pad
   TPad *logo_pad = new TPad("logo_pad", "logo_pad",0,0.91,0.08,0.985);
   logo_pad->Draw();
   logo_pad->cd();
   logo_pad->Range(-0.1875,-0,1.0625,1);
   logo_pad->SetFillColor(0);
   logo_pad->SetFillStyle(4000);
   logo_pad->SetBorderMode(0);
   logo_pad->SetBorderSize(0);
   logo_pad->SetLeftMargin(0.15);
   logo_pad->SetRightMargin(0.05);
   logo_pad->SetTopMargin(0);
   logo_pad->SetBottomMargin(0);
   logo_pad->SetFrameFillStyle(4000);
   logo_pad->SetFrameLineColor(0);
   logo_pad->SetFrameBorderMode(0);
   logo_pad->SetFrameFillStyle(4000);
   logo_pad->SetFrameLineColor(0);
   logo_pad->SetFrameBorderMode(0);

/* XPM */
const char *xpm_crdb_logo_jpg_1[] = {
/* columns rows colors chars-per-pixel */
"47 12 74 1",
"  c #0D4E5E",
". c #10505E",
"X c #074A60",
"o c #1F556B",
"O c #265E6E",
"+ c #2B5E72",
"@ c #2C606D",
"# c #2C6470",
"$ c #3A6D7A",
"% c #3A707C",
"& c #41707A",
"* c #FF5958",
"= c #FF635E",
"- c #FF6463",
"; c #FF706F",
": c #FF7F7F",
"> c #236480",
", c #3E7381",
"< c #487A86",
"1 c #517A8C",
"2 c #3084A6",
"3 c #4E8186",
"4 c #56878D",
"5 c #5A8995",
"6 c #648E97",
"7 c #6C969A",
"8 c #4397BC",
"9 c #6E95A0",
"0 c #7699A4",
"q c #729FB0",
"w c #7CAFBA",
"e c #3C99C6",
"r c #4A9EC8",
"t c #4EA3CC",
"y c #4BADDF",
"u c #6DBADF",
"i c #4CACE2",
"p c #58AFE4",
"a c #52B0E5",
"s c #6AB8E6",
"d c #74BBE6",
"f c #7BC1E9",
"g c #85A3AE",
"h c #8CAAB8",
"j c #90ACB3",
"k c #9DB4B9",
"l c #A1BABE",
"z c #FF8787",
"x c #FF989F",
"c c #FFA7A7",
"v c #FFAEB0",
"b c #FFBCBC",
"n c #9BBAC1",
"m c #A4BEC4",
"M c #AAC1C2",
"N c #B9C7CD",
"B c #BAD0D2",
"V c #92CDEE",
"C c #ACD7ED",
"Z c #C5D6D9",
"A c #FFCAC8",
"S c #FFCBD2",
"D c #FFD9D9",
"F c #C8DBE2",
"G c #D3DCE4",
"H c #D3E0E3",
"J c #CCE7F6",
"K c #DAE9F0",
"L c #E5EEED",
"P c #FFE3E6",
"I c #E7EFF0",
"U c #FFF0EF",
"Y c #EDF8F6",
"T c #FFFFFF",
"TTTb:-*;xPTTTT::-:;:xTTTHO5#@1nMTTTTTm4#5@+70LT",
"TP:*******bTTT*******-TTH$ <  0.hHTTT0 @+ %oO5L",
"T-**cDPb:**ATT**bPUS=*vTZ< <60oh$OYTT9 <$7g<$ g",
"c**DTTTTTzzDTT**ATTTx*xTZ <%TTTh< mTT9$ojTT0 oj",
":*xTTTTTTTTTTT**bTTD-*cTZ O7TTTKrtrTT004mBN$,$l",
"**ATTTTTTTTTTT*******-UTH<#qTTTTiyiTTC>4   5 6T",
"**ATTTTTTTTTTT**-***zPTTZX8sTTTTiyiTTVi2 #<  oZ",
":*zTTTTTTTTTTT**AP-*cTTTFeiuTTTJiysTTViiVTYk +4",
"b**ATTTTT:-ATT**ATb**DTTJiysTTYpyiCTTViiCTTI3O ",
"T:**xAAc-**DTT**ATTz*:TTKiyadsyiisTTTViisdw<  o",
"TTz******-ATTT**ATTT-*zTKiyiiyiyfYTTTViiyie&$<B",
"TTTDz--:bTTTTTz:STTTA:zDKsussfVKTTTTTCsssus<7GT"
};


   TImage *xpm_crdb_logo_jpg_1_img = TImage::Create();
   xpm_crdb_logo_jpg_1_img->SetImageBuffer( (char **)xpm_crdb_logo_jpg_1, TImage::kXpm);
   xpm_crdb_logo_jpg_1_img->Draw();
   logo_pad->Modified();
   crdb_extracted->cd();
  
// ------------>Primitives in pad: legend_pad
   TPad *legend_pad = new TPad("legend_pad", "legend_pad",0.6975,0.05,0.995,0.95);
   legend_pad->Draw();
   legend_pad->cd();
   legend_pad->Range(0,0,1,1);
   legend_pad->SetFillColor(0);
   legend_pad->SetFillStyle(4000);
   legend_pad->SetBorderMode(0);
   legend_pad->SetBorderSize(0);
   legend_pad->SetLeftMargin(0.01);
   legend_pad->SetFrameFillStyle(4000);
   legend_pad->SetFrameLineColor(0);
   legend_pad->SetFrameBorderMode(0);
   
   TLegend *leg = new TLegend(0,0.02,0.99,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","AMS01 (1998/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(2);
   entry->SetMarkerSize(1.2);
   entry->SetTextColor(1);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BESS (1993/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(5);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BESS (1994/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BESS (1995/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BESS (1997/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff9933");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BESS (1998/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(32);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cc00ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BESS (1999/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff66ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(30);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff66ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BESS (2000/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#999999");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BESS-TeV (2002/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#990000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1955/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cccc");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1956/03)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#33ff00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1956/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6699");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff6699");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1956/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0033ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0033ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1959/05)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cccc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cccc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1959/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1.2);
   entry->SetTextColor(1);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1960/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1960/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(5);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1961/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1963/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff9933");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1964/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cc00ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1964/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff66ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(32);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff66ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1965/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(30);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#999999");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1965/06+1966/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#990000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1965/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cccc");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1965/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#33ff00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1966/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6699");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff6699");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1966/07+1966/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0033ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0033ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1966/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cccc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cccc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1967/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(1.2);
   entry->SetTextColor(1);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1967/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1968/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1968/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1969/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(5);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff9933");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1969/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cc00ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1970/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff66ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff66ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1970/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#999999");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1970/11)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(32);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#990000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1971/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(30);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cccc");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1972/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#33ff00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Balloon (1987/05+1988/05+1989/05+1991/05)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6699");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff6699");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BalloonNMSU (1976/05)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0033ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0033ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BalloonNMSU (1979/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cccc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cccc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","BalloonUNH (1977/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.2);
   entry->SetTextColor(1);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","CALET (2015/10-2021/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","CAPRICE (1994/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","CAPRICE (1998/05)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","CREAM-I+III (2004+2007)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff9933");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","CREAM-III (2007/12-2008/01)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cc00ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Discoverer36 (1961/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff66ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(5);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff66ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","E6 (1974/12-1977/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#999999");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMAX (1992/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#990000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP3 (1965/05-1965/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cccc");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP3 (1965/05-1965/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(32);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#33ff00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP5 (1970/04-1970/10)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6699");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(30);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff6699");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP5 (1971/06-1971/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0033ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0033ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP5 (1972/06-1972/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cccc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cccc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP7 (1973/05-1973/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextColor(1);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP8 (1974/07-1974/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP8 (1977/01-1979/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP8 (1982/07-1982/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","IMP8 (1984/08-1984/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff9933");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","ISS-CREAM (2017/08-2019/02)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cc00ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","JACEE (1979+1980+1982+1983+1984+1986+1987+1988+1990+1994+1995)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff66ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff66ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","LEAP (1987/08)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#999999");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","MASS (1989/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(5);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#990000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","MASS (1991/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cccc");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","MUBEE (1975/09+1978/08+1986/07+1987/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#33ff00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","PAMELA (2006/08-2006/09)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6699");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff6699");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","PAMELA (2006/11-2006/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0033ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(32);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0033ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","PAMELA (2007/11-2007/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cccc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(30);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cccc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","PAMELA (2008/11-2008/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(1.2);
   entry->SetTextColor(1);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","PAMELA (2009/12-2010/01)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","PAMELA-CALO (2006/06-2010/01)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Pioneer8 (1968/04)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","RICH-II (1997/10)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff9933");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","RUNJOB (1995+1996+1997+1999)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cc00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cc00ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","SOKOL (1984/03-1986/01)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff66ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff66ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Ulysses-KET (1990/10-1991/02)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#999999");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Ulysses-KET (1992/07-1992/10)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#990000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Ulysses-KET (1993/07-1993/10)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cccc");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Ulysses-KET (1994/07-1994/10)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(5);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#33ff00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Voyager1 (2008/05)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6699");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff6699");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Voyager1 (2012/10-2012/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0033ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0033ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Voyager1-HET (2012/12-2015/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#cccc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#cccc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Voyager1-HET-Aend (2012/12-2015/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(32);
   entry->SetMarkerSize(1.2);
   entry->SetTextColor(1);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Voyager1-LET (2012/12-2015/06)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(30);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Voyager2 (2019/03-2019/07)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000ff");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   entry=leg->AddEntry("NULL","Voyager2-HET (1986/01-1987/12)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(1.2);

   ci = TColor::GetColor("#00cc00");
   entry->SetTextColor(ci);
   entry->SetTextFont(132);
   entry->SetTextSize(0.06);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.05,0.915,1,0.99,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(132);
   pt->SetTextSize(0.07);
   TText *pt_LaTex = pt->AddText("Err. tot. = (stat^{2}+syst^{2})^{1/2}");
   pt->Draw();
   legend_pad->Modified();
   crdb_extracted->cd();
   crdb_extracted->Modified();
   crdb_extracted->cd();
   crdb_extracted->SetSelected(crdb_extracted);
}
