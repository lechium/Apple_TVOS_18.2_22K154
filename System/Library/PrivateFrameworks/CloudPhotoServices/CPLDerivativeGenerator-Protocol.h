//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLAdjustments, CPLDerivativesFilter, CPLFingerprintScheme, CPLResource, NSArray, NSError, NSString, NSURL;

@protocol CPLDerivativeGenerator
+ (NSArray *)involvedProcesses;
+ (_Bool)isUnsupportedOriginalFormatError:(NSError *)arg1;
+ (void)generateDerivativeResourcesFromInputResource:(CPLResource *)arg1 withAdjustments:(CPLAdjustments *)arg2 destinationDirectory:(NSURL *)arg3 fingerprintScheme:(CPLFingerprintScheme *)arg4 derivativesFilter:(CPLDerivativesFilter *)arg5 recordChangeType:(unsigned long long)arg6 includePosterFrameForVideo:(_Bool)arg7 completionHandler:(void (^)(NSArray *, NSError *))arg8;
+ (_Bool)canGenerateImageDerivativesFromUTI:(NSString *)arg1;
+ (_Bool)isMovieUTI:(NSString *)arg1;
@end

