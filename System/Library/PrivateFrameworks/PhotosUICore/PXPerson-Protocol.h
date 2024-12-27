//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol NSFastEnumeration;

@protocol PXPerson <NSObject>
+ (void)px_loadRepresentativeFacesForPersons:(id <NSFastEnumeration>)arg1;
@property(readonly) _Bool px_isPet;
@property(readonly) _Bool px_isHuman;
@property(readonly) short detectionType;
@property(readonly) _Bool isPersonModel;
@property(readonly) _Bool isVerified;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) NSString *px_longStyleLocalizedName;
@property(readonly) NSString *px_localizedName;
@property(readonly) NSString *name;
@property(readonly) long long numberOfAssets;
- (int)requestFaceCropImageWithTargetSize:(struct CGSize)arg1 displayScale:(double)arg2 cropFactor:(long long)arg3 style:(long long)arg4 cacheResult:(_Bool)arg5 synchronous:(_Bool)arg6 resultHandler:(void (^)(UIImage *, NSDictionary *))arg7;

@optional
@property(readonly) NSDate *px_keyPhotoDate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDate",?,R

@end

