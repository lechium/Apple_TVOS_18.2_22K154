//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FANetworkService;

@interface FANetworkClient : NSObject
{
    FANetworkService *_networkService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000d3da
@property(readonly, nonatomic) FANetworkService *networkService; // @synthesize networkService=_networkService;
- (id)initWithNetworkService:(id)arg1;	// IMP=0x001000000000d365

@end

