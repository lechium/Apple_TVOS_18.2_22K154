//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, _TtC13CDMFoundation18ServiceStoreHasher, _TtC13CDMFoundation24GraphServiceKeyingFields;

@protocol CDMGraphService
+ (void)hashWith:(_TtC13CDMFoundation24GraphServiceKeyingFields *)arg1 into:(_TtC13CDMFoundation18ServiceStoreHasher *)arg2;
+ (_Bool)isEnabled;
- (_Bool)runAndReturnError:(id *)arg1;
- (NSNumber *)setupAndReturnError:(id *)arg1;
- (_Bool)setup;
- (id)init;
@end

