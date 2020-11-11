/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class INIntent, NSNumber;

@interface WFWidgetOptions : NSObject {

	INIntent* _intent;
	unsigned long long _sizeClass;
	NSNumber* _cornerRadius;

}

@property (nonatomic,copy) INIntent * intent;                           //@synthesize intent=_intent - In the implementation block
@property (assign,nonatomic) unsigned long long sizeClass;              //@synthesize sizeClass=_sizeClass - In the implementation block
@property (nonatomic,retain) NSNumber * cornerRadius;                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(unsigned long long)sizeClass;
-(INIntent *)intent;
-(NSNumber *)cornerRadius;
-(void)setSizeClass:(unsigned long long)arg1 ;
-(void)setCornerRadius:(NSNumber *)arg1 ;
-(void)setIntent:(INIntent *)arg1 ;
@end
