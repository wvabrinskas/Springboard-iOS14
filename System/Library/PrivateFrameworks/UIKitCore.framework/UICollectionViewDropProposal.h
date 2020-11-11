/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIDropProposal.h>

@interface UICollectionViewDropProposal : UIDropProposal {

	long long _intent;

}

@property (assign,nonatomic) long long intent;              //@synthesize intent=_intent - In the implementation block
-(long long)intent;
-(id)description;
-(id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2 ;
-(id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2 ;
-(long long)dropLocation;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(void)setIntent:(long long)arg1 ;
@end
