//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNAction, LNFocusConfigurationAppContext;

__attribute__((visibility("hidden")))
@interface LNFetchActionAppContextConnectionOperation
{
    LNAction *_action;	// 8 = 0x8
    LNFocusConfigurationAppContext *_result;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007a5f0
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) LNFocusConfigurationAppContext *result; // @synthesize result=_result;
@property(copy, nonatomic) LNAction *action; // @synthesize action=_action;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000007a44b
- (void)start;	// IMP=0x000000000007a32d
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007a085

@end

