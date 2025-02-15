//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICFPSAPContext : NSObject
{
}

- (_Bool)signData:(id)arg1 returningSignatureData:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000a9bff
- (_Bool)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a9bb0
- (_Bool)exchangeWithSAPVersion:(unsigned int)arg1 data:(id)arg2 returningData:(id *)arg3 exchangeStatus:(char *)arg4 error:(id *)arg5;	// IMP=0x00000000000a9b4b
- (void)dealloc;	// IMP=0x00000000000a9b1c
- (id)initReturningError:(id *)arg1;	// IMP=0x00000000000a9aac

@end

