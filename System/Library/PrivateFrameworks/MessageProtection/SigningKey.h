//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SigningPublicKey;

__attribute__((visibility("hidden")))
@interface SigningKey
{
    SigningPublicKey *__publicKey;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015af7
@property(retain, nonatomic) SigningPublicKey *_publicKey; // @synthesize _publicKey=__publicKey;
- (id)description;	// IMP=0x0000000000015a45
- (id)signDataWithFormatter:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000159de
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015955
- (id)publicKey;	// IMP=0x000000000001588d
- (id)tetraWrapped;	// IMP=0x0000000000005fed

@end

