//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface DownloadGenericError
{
    NSError *_error;	// 40 = 0x28
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000010977f
- (id)_notificationTitle;	// IMP=0x00100000001094f9
- (id)_notificationBody;	// IMP=0x001000000010913f
- (_Bool)_isInstallError:(id)arg1;	// IMP=0x00100000001090e4
- (void)performActionForResponseFlags:(unsigned long long)arg1;	// IMP=0x0010000000108f06
- (id)copyUserNotification;	// IMP=0x0010000000108d44
- (_Bool)canCoalesceWithError:(id)arg1;	// IMP=0x0010000000108c73
- (void)dealloc;	// IMP=0x0010000000108c31
- (id)initWithError:(id)arg1;	// IMP=0x0010000000108bda

@end

