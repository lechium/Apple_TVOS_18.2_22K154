//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class NSString;

@protocol MKAnnotation <NSObject>
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
@property(readonly, copy, nonatomic) NSString *subtitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) NSString *title;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
@end

