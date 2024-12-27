//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSNumber, NSString, NSURL;

@protocol PLVideoResource <NSObject>
+ (_Bool)deviceSupportsHDR;
- (NSString *)additionalDescription;
- (NSString *)uniformTypeIdentifier;
- (_Bool)isHDROrSDRDependingOnMasterVideo;
- (_Bool)isSDRFallback;
- (_Bool)isHDRDerivative;
- (_Bool)hasAssociatedMediaMetadata;
- (NSURL *)fileURLIfLocal;
- (_Bool)matchesOrExceedsQualityLevel:(unsigned int)arg1;
- (_Bool)isOriginalVideoComplement;
- (_Bool)isOriginalVideo;
- (_Bool)isLargeQuality;
- (NSNumber *)cachedIsPlayable;
- (_Bool)isPlayable;
- (_Bool)isDownloadable;
- (_Bool)isStreamable;
- (_Bool)isLocallyGeneratable;
- (_Bool)isLocallyAvailable;
- (unsigned int)version;
- (unsigned short)storeClassID;
@end

