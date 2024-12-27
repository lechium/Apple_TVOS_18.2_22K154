//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/NSObject-Protocol.h>

@class SAUIDomainObjectPickerSelection, SiriUIObjectPickerViewController, UIViewController;

@protocol SiriUIObjectPickerViewControllerDelegate <NSObject>
- (UIViewController *)viewControllerForPickerPresentation:(SiriUIObjectPickerViewController *)arg1;

@optional
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didSelectObject:(SAUIDomainObjectPickerSelection *)arg2 fromPicker:(UIViewController *)arg3;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didDismissPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 willDismissPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 willPresentPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
@end

