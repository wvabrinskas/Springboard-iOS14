/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKMentionEntityNode, NSString;

@interface CKMentionAutoCompleteAttribute : NSObject {

	CKMentionEntityNode* _mentionEntityNode;
	NSString* _originalText;
	NSString* _displayText;

}

@property (nonatomic,retain) CKMentionEntityNode * mentionEntityNode;              //@synthesize mentionEntityNode=_mentionEntityNode - In the implementation block
@property (nonatomic,retain) NSString * originalText;                              //@synthesize originalText=_originalText - In the implementation block
@property (nonatomic,retain) NSString * displayText;                               //@synthesize displayText=_displayText - In the implementation block
-(void)setOriginalText:(NSString *)arg1 ;
-(id)initWithMentionEntityNode:(id)arg1 originalText:(id)arg2 displayText:(id)arg3 ;
-(CKMentionEntityNode *)mentionEntityNode;
-(void)setMentionEntityNode:(CKMentionEntityNode *)arg1 ;
-(NSString *)originalText;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
@end

