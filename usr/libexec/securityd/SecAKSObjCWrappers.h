//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SecAKSObjCWrappers : NSObject
{
}

+ (_Bool)aksDecryptWithKeybag:(int)arg1 keyclass:(int)arg2 ciphertext:(id)arg3 outKeyclass:(int *)arg4 plaintext:(id)arg5 personaId:(const void *)arg6 personaIdLength:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x004000000003735c
+ (_Bool)aksEncryptWithKeybag:(int)arg1 keyclass:(int)arg2 plaintext:(id)arg3 outKeyclass:(int *)arg4 ciphertext:(id)arg5 personaId:(const void *)arg6 personaIdLength:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x0010000000037242

@end

