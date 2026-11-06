#ifdef __CLING__
#pragma cling optimize(0)
#endif
void 1734486389()
{
//=========Macro generated from canvas: artcanvas/canvas
//=========  (Wed Dec 18 10:46:58 2024) by ROOT version 6.32.06
   TCanvas *artcanvas = new TCanvas("artcanvas", "canvas",55,114,800,800);
   gStyle->SetOptFit(1);
   artcanvas->SetHighLightColor(2);
   artcanvas->Range(0,0,1,1);
   artcanvas->SetFillColor(0);
   artcanvas->SetBorderMode(0);
   artcanvas->SetBorderSize(2);
   artcanvas->SetFrameBorderMode(0);
   
   TPaveLabel *pl = new TPaveLabel(0.5,0.92,0.95,0.95,"Wed Dec 18 10:46:29 2024(1734486389)","br");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextSize(0.99);
   pl->Draw();
   
   pl = new TPaveLabel(0.05,0.96,0.95,0.99,"","br");
   pl->SetTextSize(0.99);
   pl->Draw();
   
   pl = new TPaveLabel(0.08,0.92,0.5,0.95,"","br");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextSize(0.99);
   pl->Draw();
  
// ------------>Primitives in pad: graphs
   TPad *graphs__1 = new TPad("graphs", "graphs",0.05,0.01,0.95,0.91);
   graphs__1->Draw();
   graphs__1->cd();
   graphs__1->Range(0.5,-11.99317,5.5,3.426516);
   graphs__1->SetFillColor(0);
   graphs__1->SetBorderMode(0);
   graphs__1->SetBorderSize(2);
   graphs__1->SetLogx();
   graphs__1->SetLogy();
   graphs__1->SetGridx();
   graphs__1->SetGridy();
   graphs__1->SetFrameBorderMode(0);
   graphs__1->SetFrameBorderMode(0);
   
   TF1 *fun22 = new TF1("fun2","TMath::Power(10,-0.584)*TMath::Power(TMath::Power(10,-1.74)*x,-3.045)",10,100000, TF1::EAddToList::kDefault);
   fun22->SetFillColor(19);
   fun22->SetFillStyle(0);
   fun22->SetLineColor(2);
   fun22->SetLineWidth(2);
   fun22->GetXaxis()->SetTitle("Primary cosmic-ray energy (GeV)");
   fun22->GetXaxis()->SetLabelFont(42);
   fun22->GetXaxis()->SetTitleOffset(1);
   fun22->GetXaxis()->SetTitleFont(42);
   fun22->GetYaxis()->SetTitle("Flux (m^{-2} sr^{-1} s^{-1} GeV^{-1}");
   fun22->GetYaxis()->SetLabelFont(42);
   fun22->GetYaxis()->SetTitleOffset(1.5);
   fun22->GetYaxis()->SetTitleFont(42);
   fun22->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.9348625,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TMath::Power(10,-0.584)*TMath::Power(TMath::Power(10,-1.74)*x,-3.045)");
   pt->Draw();
   graphs__1->Modified();
   artcanvas->cd();
   artcanvas->Modified();
   artcanvas->SetSelected(artcanvas);
}
