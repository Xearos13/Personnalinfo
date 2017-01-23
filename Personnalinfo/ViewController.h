//
//  ViewController.h
//  Personnalinfo
//
//  Created by Marc-Alan Leblanc on 2017-01-23.
//  Copyright © 2017 Marc-Alan Leblanc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *FNTextField;

@property (weak, nonatomic) IBOutlet UITextField *LNTextField;
@property (weak, nonatomic) IBOutlet UITextField *PhoneTextField;
@property (weak, nonatomic) IBOutlet UITextField *NumberTextField;
@property (weak, nonatomic) IBOutlet UITextField *StreetTextField;
@property (weak, nonatomic) IBOutlet UITextField *CountryTextField;
@property (weak, nonatomic) IBOutlet UITextField *PostalCodeTextField;


@property (weak, nonatomic) IBOutlet UIButton *CButton;
@property (weak, nonatomic) IBOutlet UIButton *SButton;
@property (weak, nonatomic) IBOutlet UIButton *MButton;

- (IBAction)didTouchUpInside:(id)sender;
- (IBAction)submit_didTouchUpInside:(id)sender;
- (IBAction)modify_didtTouchUpInside:(id)sender;

@property (weak, nonatomic) IBOutlet UILabel *FNlabel;
@property (weak, nonatomic) IBOutlet UILabel *LNlabel;
@property (weak, nonatomic) IBOutlet UILabel *Plabel;
@property (weak, nonatomic) IBOutlet UILabel *Nlabel;
@property (weak, nonatomic) IBOutlet UILabel *Slabel;
@property (weak, nonatomic) IBOutlet UILabel *Citylabel;
@property (weak, nonatomic) IBOutlet UILabel *Countrylabel;
@property (weak, nonatomic) IBOutlet UILabel *PSlabel;

@end

