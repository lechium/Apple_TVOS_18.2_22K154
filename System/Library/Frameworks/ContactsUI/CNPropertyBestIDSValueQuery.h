//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNPropertyGroupItem, CNPropertyIDSRequest, NSArray, NSMutableArray;
@protocol CNPropertyBestIDSValueQueryDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyBestIDSValueQuery : NSObject
{
    NSMutableArray *_validIDSItems;	// 8 = 0x8
    id <CNPropertyBestIDSValueQueryDelegate> _delegate;	// 16 = 0x10
    NSArray *_propertyItems;	// 24 = 0x18
    CNPropertyIDSRequest *_idsRequest;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a31a8
@property(retain, nonatomic) CNPropertyIDSRequest *idsRequest; // @synthesize idsRequest=_idsRequest;
@property(retain, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
@property(nonatomic) __weak id <CNPropertyBestIDSValueQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *validIDSItems; // @synthesize validIDSItems=_validIDSItems;
@property(readonly, nonatomic) CNPropertyGroupItem *bestIDSProperty;
- (void)cancel;	// IMP=0x00000000000a2c11
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2;	// IMP=0x00000000000a27ae

@end

