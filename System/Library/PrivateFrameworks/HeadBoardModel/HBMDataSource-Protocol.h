//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeadBoardModel/NSObject-Protocol.h>

@class HBMStoreCollection;
@protocol HBMDataSourceDelegate;

@protocol HBMDataSource <NSObject>
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
@property(readonly, copy, nonatomic) HBMStoreCollection *collection;
@property(nonatomic) __weak id <HBMDataSourceDelegate> delegate;
- (_Bool)load:(id *)arg1;
@end

