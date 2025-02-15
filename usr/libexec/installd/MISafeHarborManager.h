//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MISafeHarborManager : NSObject
{
}

+ (id)defaultManager;	// IMP=0x004000000005388b
- (id)safeHarborListForType:(unsigned long long)arg1 forPersona:(id)arg2 withError:(id *)arg3;	// IMP=0x00400000000540ac
- (_Bool)removeSafeHarborWithIdentifier:(id)arg1 forPersona:(id)arg2 ofType:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000053bce
- (_Bool)registerSafeHarborAtURL:(id)arg1 withOptions:(id)arg2 forIdentifier:(id)arg3 forPersona:(id)arg4 ofType:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0010000000053918

@end

