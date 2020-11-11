/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Sharing/Sharing-Structs.h>
@class NSString;

@interface SFSiriWordTimingInfo : NSObject {

	NSString* _localizedText;
	double _timeOffset;
	NSString* _wordID;
	NSRange _textRange;

}

@property (nonatomic,copy) NSString * localizedText;              //@synthesize localizedText=_localizedText - In the implementation block
@property (assign,nonatomic) double timeOffset;                   //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) NSRange textRange;                   //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,copy) NSString * wordID;                     //@synthesize wordID=_wordID - In the implementation block
+(id)timingInfoArrayWithSerializableArray:(id)arg1 ;
+(id)serializableArrayWithTimingInfoArray:(id)arg1 ;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(NSString *)wordID;
-(void)setWordID:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSRange)textRange;
-(id)dictionary;
-(void)setTextRange:(NSRange)arg1 ;
-(NSString *)localizedText;
-(void)setLocalizedText:(NSString *)arg1 ;
@end
