//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@protocol MCMFileManagerHandlesDataProtection
- (_Bool)setDataProtectionAtURL:(NSURL *)arg1 toDataProtectionClass:(int)arg2 directoriesOnly:(_Bool)arg3 recursive:(_Bool)arg4 error:(id *)arg5;
- (_Bool)dataProtectionClassOfItemAtURL:(NSURL *)arg1 dataProtectionClass:(int *)arg2 error:(id *)arg3;
@end

