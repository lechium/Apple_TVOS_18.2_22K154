//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMActionModule.h>

@class NSString, TVSMButtonViewController;

@interface TVSMExpanseNowPlayingModule : TVSMActionModule
{
    TVSMButtonViewController *_buttonVC;	// 8 = 0x8
}

+ (id)availableStyles;	// IMP=0x00100000000018c0
- (void).cxx_destruct;	// IMP=0x00000000000027f0
@property(retain, nonatomic) TVSMButtonViewController *buttonVC; // @synthesize buttonVC=_buttonVC;
- (void)expanseContextDidUpdate:(id)arg1;	// IMP=0x0000000000002750
- (void)handleAction;	// IMP=0x0000000000001e90
- (void)updateContextSpecificUI;	// IMP=0x0000000000001ae0
- (id)contentViewController;	// IMP=0x0000000000001a50
- (void)dealloc;	// IMP=0x00000000000019d0
- (id)init;	// IMP=0x00000000000018e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

