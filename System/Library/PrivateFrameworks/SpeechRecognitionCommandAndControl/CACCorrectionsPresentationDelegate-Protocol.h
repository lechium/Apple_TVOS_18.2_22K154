//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeechRecognitionCommandAndControl/NSObject-Protocol.h>

@class CACCorrectionsPresentationViewController, NSString;

@protocol CACCorrectionsPresentationDelegate <NSObject>
- (void)dismissCorrectionsPresentationViewController:(CACCorrectionsPresentationViewController *)arg1;
- (void)correctionsPresentationViewController:(CACCorrectionsPresentationViewController *)arg1 didSelectItemWithText:(NSString *)arg2;
@end

