//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CALExtensions)
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;	// IMP=0x00800000000125ac
+ (id)davCompatibleFilenameForFilename:(id)arg1;	// IMP=0x00800000000124bf
+ (id)URLWithDirtyString:(id)arg1;	// IMP=0x0080000000013158
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;	// IMP=0x0080000000012fa9
+ (int)classicPortForScheme:(id)arg1;	// IMP=0x0080000000012f37
- (id)pathWithoutDecodingAndRemovingTrailingSlash;	// IMP=0x0010000000012b85
- (id)pathWithoutTrailingRemovingSlash;	// IMP=0x0010000000012ac9
- (id)serverURL;	// IMP=0x0010000000012975
- (id)unquotedPassword;	// IMP=0x0010000000012925
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;	// IMP=0x0010000000012745
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;	// IMP=0x00100000000121db
- (id)queryParameters;	// IMP=0x0010000000011f1f
- (id)calDAV_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x0010000000013b66
- (_Bool)absoluteURLisEqual:(id)arg1;	// IMP=0x0010000000013a9c
- (id)URLWithoutPassword;	// IMP=0x0010000000013a07
- (id)URLWithoutUsername;	// IMP=0x00100000000138dc
- (id)URLWithUsername:(id)arg1;	// IMP=0x00100000000136ce
- (id)uri;	// IMP=0x00100000000135fe
- (id)initWithDirtyString:(id)arg1;	// IMP=0x00100000000131a5
@end

