//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NGMMessageFormatter : NSObject
{
}

+ (id)formatOutgoingInnerMessageWithPayload:(id)arg1 attributes:(id)arg2 destinationIdentity:(id)arg3 sendingIdentity:(id)arg4 error:(id *)arg5;	// IMP=0x008000000000affd
+ (id)formatOutgoingMessageWithEncryptedPayload:(id)arg1 ephemeral:(id)arg2 signature:(id)arg3 keyValidator:(id)arg4;	// IMP=0x008000000000aee3

@end

