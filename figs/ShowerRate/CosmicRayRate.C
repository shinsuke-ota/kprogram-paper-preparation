#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CosmicRayRate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Dec 18 09:21:35 2024) by ROOT version 6.32.06
   TCanvas *c1 = new TCanvas("c1", "c1",592,1021,800,800);
   c1->Range(9.25,-6.198203,14.25,2.316233);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogx();
   c1->SetLogy();
   c1->SetGridx();
   c1->SetGridy();
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.05);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TF1 *fun2 = new TF1("fun","TMath::Power(TMath::Power(10,-10.74)*x,-1.65)",1e+10,1e+14, TF1::EAddToList::kDefault);
   fun2->SetFillColor(19);
   fun2->SetFillStyle(0);
   fun2->SetLineColor(2);
   fun2->SetLineWidth(2);
   fun2->GetXaxis()->SetTitle("Primary cosmic-ray energy(eV)");
   fun2->GetXaxis()->SetLabelFont(42);
   fun2->GetXaxis()->SetTitleOffset(1);
   fun2->GetXaxis()->SetTitleFont(42);
   fun2->GetYaxis()->SetTitle("Primary cosmic-ray rate (m^{-2}s^{-1})");
   fun2->GetYaxis()->SetLabelFont(42);
   fun2->GetYaxis()->SetTitleFont(42);
   fun2->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.9377097,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TMath::Power(TMath::Power(10,-10.74)*x,-1.65)");
   pt->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
