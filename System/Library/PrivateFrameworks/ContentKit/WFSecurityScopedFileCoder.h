//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFFileCoder.h"

__attribute__((visibility("hidden")))
@interface WFSecurityScopedFileCoder : WFFileCoder
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00800000000f2d54
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f2fe5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f2fdf
- (id)sharedTemporaryDirectory;	// IMP=0x00000000000f2fc6
- (id)sharedDirectory;	// IMP=0x00000000000f2fbe
- (void)waitForFileAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f2fb3
- (id)decodeFileWithCoder:(id)arg1 fileShouldBeDeletedOnDeallocation:(_Bool *)arg2 fileIsSecurityScoped:(_Bool *)arg3;	// IMP=0x00000000000f2ed6
- (void)archiveFileAtURL:(id)arg1 fileShouldBeDeletedOnDeallocation:(_Bool)arg2 withCoder:(id)arg3;	// IMP=0x00000000000f2d5c

@end

