//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSNumber, NSString, UIImage;
@protocol TVCSAudioRoute;

@interface TVSSAudioRoute : NSObject
{
    id <TVCSAudioRoute> _route;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000b89d0
@property(readonly, nonatomic) id <TVCSAudioRoute> route; // @synthesize route=_route;
- (_Bool)_shouldShowNowPlayingInfo;	// IMP=0x00100000000b8780
- (id)_symbolForBatteryLevel:(id)arg1;	// IMP=0x00100000000b8550
- (_Bool)_shouldShowSingleBatteryPercentage;	// IMP=0x00100000000b8320
- (_Bool)_shouldShowSeparateBatteryPercentages;	// IMP=0x00100000000b7f90
- (id)_currentSingleBatteryImage;	// IMP=0x00100000000b7960
- (id)_currentSingleBatteryString;	// IMP=0x00100000000b72b0
- (id)_currentRightBatteryString;	// IMP=0x00100000000b7120
- (id)_currentLeftBatteryString;	// IMP=0x00100000000b6f90
@property(readonly, nonatomic) NSString *contentText3;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) NSString *contentText2;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) NSString *contentText1;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) UIImage *contentImage2;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(readonly, nonatomic) UIImage *contentImage1;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(readonly, nonatomic) UIImage *contentImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(readonly, nonatomic) NSString *contentTitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

- (id)identifier;	// IMP=0x00100000000b63b0
- (id)initWithRoute:(id)arg1;	// IMP=0x00100000000b62f0

// Remaining properties
@property(readonly, nonatomic) NSAttributedString *contentAttrText1;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSAttributedString",?,R,N

@property(readonly, nonatomic) NSAttributedString *contentAttrText2;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSAttributedString",?,R,N

@property(readonly, nonatomic) NSAttributedString *contentAttrText3;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSAttributedString",?,R,N

@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) UIImage *contentImage3;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(readonly, nonatomic) UIImage *contentImage4;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(nonatomic) _Bool contentIsDisabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool contentIsSelected;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) NSNumber *contentPercentage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,&,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

