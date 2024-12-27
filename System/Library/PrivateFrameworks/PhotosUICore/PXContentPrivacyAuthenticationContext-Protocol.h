//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString;

@protocol PXContentPrivacyAuthenticationContext <NSObject>
@property(readonly, nonatomic) NSString *authenticationTitle;

@optional
@property(readonly, nonatomic) NSString *authenticationContextIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

- (_Bool)canPerformAuthentication;
@end

