//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@class GCHIDServiceInfo, NSArray, NSString;
@protocol GCDeviceLegacy;

@protocol GCDeviceLegacy <NSObject>
@property(readonly, nonatomic) NSString *productCategory;
@property(nonatomic, getter=isPublished) _Bool published;
@property(nonatomic, getter=areAllHIDDevicesConnected) _Bool allHIDDevicesConnected;
@property(readonly, nonatomic) NSArray *hidServices;
- (void)clearServiceRef;
- (void)removeServiceRef:(struct __IOHIDServiceClient *)arg1;
- (_Bool)hasServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)addServiceRef:(GCHIDServiceInfo *)arg1;
- (void)addServiceRefsWithDevice:(id <GCDeviceLegacy>)arg1;
- (void)_legacy_handleEvent:(struct __IOHIDEvent *)arg1;
- (id)initWithServiceRef:(struct __IOHIDServiceClient *)arg1;
@end

