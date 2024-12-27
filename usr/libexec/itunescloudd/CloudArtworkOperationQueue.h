//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@class ICConnectionConfiguration;

@interface CloudArtworkOperationQueue : NSOperationQueue
{
    long long _sourceType;	// 8 = 0x8
    ICConnectionConfiguration *_configuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000005a19e
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
- (_Bool)_hasValidUserIdentity:(id)arg1 forSourceType:(long long)arg2;	// IMP=0x0010000000059f95
- (id)_artworkURLForInfoDictionary:(id)arg1;	// IMP=0x0010000000059b60
- (void)addOperations:(id)arg1;	// IMP=0x0010000000059775
- (void)addOperation:(id)arg1;	// IMP=0x00100000000596a0
- (id)initWithSourceType:(long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000059620

@end

