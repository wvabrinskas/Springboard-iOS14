/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MFMessageBody.h>
#import <libobjc.A.dylib/ECMimePart.h>

@class NSString, MFMimePart, NSArray;

@interface MFMimeBody : MFMessageBody <ECMimePart> {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;
	long long _encryptedDescendantState;
	BOOL _isEncrypted;
	NSArray* _signers;

}

@property (nonatomic,retain) NSArray * signers;                               //@synthesize signers=_signers - In the implementation block
@property (assign,nonatomic) BOOL isEncrypted;                                //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (nonatomic,retain) MFMimePart * topLevelPart; 
@property (nonatomic,readonly) BOOL hasEncryptedDescendantPart; 
@property (nonatomic,copy,readonly) NSString * mimeSubtype; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,readonly) unsigned long long totalTextSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)versionString;
+(id)copyNewMimeBoundary;
-(id)textHtmlPart;
-(id)init;
-(BOOL)isHTML;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(BOOL)isRich;
-(BOOL)isEncrypted;
-(id)preferredBodyPart;
-(id)partWithNumber:(id)arg1 ;
-(NSArray *)signers;
-(long long)numberOfAlternatives;
-(NSString *)mimeType;
-(MFMimePart *)topLevelPart;
-(unsigned long long)totalTextSize;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(BOOL)hasEncryptedDescendantPart;
-(id)attachmentURLs;
-(void)setSigners:(NSArray *)arg1 ;
-(void)setIsEncrypted:(BOOL)arg1 ;
-(id)attachments;
-(void)setTopLevelPart:(MFMimePart *)arg1 ;
-(long long)preferredAlternative;
-(void)setPreferredAlternative:(long long)arg1 ;
-(NSString *)mimeSubtype;
@end
