//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface LNFetchAppIntentStateConnectionOperation
{
    NSDictionary *_results;	// 8 = 0x8
    NSArray *_appIntentIdentifiers;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b6b7c
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *appIntentIdentifiers; // @synthesize appIntentIdentifiers=_appIntentIdentifiers;
@property(copy, nonatomic) NSDictionary *results; // @synthesize results=_results;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000b69d7
- (void)start;	// IMP=0x00000000000b68b9
- (id)initWithConnectionInterface:(id)arg1 appIntentIdentifiers:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b6611

@end

