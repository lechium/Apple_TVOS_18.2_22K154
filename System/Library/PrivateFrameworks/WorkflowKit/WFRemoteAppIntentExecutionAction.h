//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFAction.h"

__attribute__((visibility("hidden")))
@interface WFRemoteAppIntentExecutionAction : WFAction
{
}

- (id)init;	// IMP=0x00000000000d2959
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;	// IMP=0x00000000000d28af
- (_Bool)isApprovedForPublicShortcutsDrawer;	// IMP=0x00000000000d25d2
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;	// IMP=0x00000000000d256e
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000000d2255

// Remaining properties
@property(nonatomic, readonly) _Bool approvedForPublicShortcutsDrawer;

@end

