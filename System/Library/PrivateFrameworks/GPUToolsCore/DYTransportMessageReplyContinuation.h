//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DYContinuation.h"

__attribute__((visibility("hidden")))
@interface DYTransportMessageReplyContinuation : DYContinuation
{
    unsigned long long timeout;	// 32 = 0x20
    unsigned int replyCount;	// 40 = 0x28
}

- (void)dispatchError:(id)arg1;	// IMP=0x0000000000016f03

@end

