//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SecEscrowRequest;

@interface EscrowRequestCLI : NSObject
{
    SecEscrowRequest *_escrowRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000002050
@property(retain) SecEscrowRequest *escrowRequest; // @synthesize escrowRequest=_escrowRequest;
- (int)storePrerecordsInEscrow;	// IMP=0x0010000000001f4e
- (int)reset;	// IMP=0x0010000000001e7e
- (int)status;	// IMP=0x0010000000001b6a
- (int)trigger;	// IMP=0x0010000000001a93
- (id)initWithEscrowRequest:(id)arg1;	// IMP=0x0010000000001a28

@end

