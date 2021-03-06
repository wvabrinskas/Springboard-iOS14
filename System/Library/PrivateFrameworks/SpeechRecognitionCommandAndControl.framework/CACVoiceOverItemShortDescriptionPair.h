/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CACVoiceOverDescribable;
@class NSString;

@interface CACVoiceOverItemShortDescriptionPair : NSObject {

	id<CACVoiceOverDescribable> _item;
	NSString* _shortDescription;

}

@property (nonatomic,retain) id<CACVoiceOverDescribable> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * shortDescription;                   //@synthesize shortDescription=_shortDescription - In the implementation block
-(id<CACVoiceOverDescribable>)item;
-(void)setItem:(id<CACVoiceOverDescribable>)arg1 ;
-(NSString *)shortDescription;
-(void)setShortDescription:(NSString *)arg1 ;
@end

