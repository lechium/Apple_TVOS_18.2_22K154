//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreFetchArchiveOperation
{
    CDUnknownBlockType _fetchResult;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000cbc163
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
- (id)mainReturningError;	// IMP=0x0000000000cbbefb
- (id)initWithFetchResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cbbe89

@end

