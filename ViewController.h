//
//  ViewController.h
//  Zadanie2
//
//  Created by Mariusz on 16/10/2021.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"
@interface ViewController : UIViewController <SecondViewControllerDelegate>
@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;
@property (nonatomic, weak) IBOutlet UITextField *surnameTextField;
@end

