//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class WFContentCollection;

__attribute__((visibility("hidden")))
@interface WFSetAirDropReceivingAction : WFAction
{
}

- (id)init;	// IMP=0x000000000002d31d
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;	// IMP=0x000000000002d273
- (id)localizedDescriptionSummaryWithContext:(id)arg1;	// IMP=0x000000000002d10b
- (void)runWithInput:(WFContentCollection *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000002ce44

@end

