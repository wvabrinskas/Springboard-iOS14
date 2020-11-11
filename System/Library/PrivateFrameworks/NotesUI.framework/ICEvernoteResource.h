/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface ICEvernoteResource : NSObject <NSSecureCoding> {

	BOOL _isAttachment;
	NSString* _mime;
	NSString* _fileName;
	NSData* _data;
	NSString* _md5Hash;
	double _imageWidth;
	double _imageHeight;
	double _duration;

}

@property (assign,nonatomic) BOOL isAttachment;                //@synthesize isAttachment=_isAttachment - In the implementation block
@property (nonatomic,retain) NSString * mime;                  //@synthesize mime=_mime - In the implementation block
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * md5Hash;               //@synthesize md5Hash=_md5Hash - In the implementation block
@property (assign,nonatomic) double imageWidth;                //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) double imageHeight;               //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) double duration;                  //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDuration:(double)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)mime;
-(double)imageHeight;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setImageWidth:(double)arg1 ;
-(NSString *)fileName;
-(BOOL)isAttachment;
-(NSData *)data;
-(void)setFileName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)md5Hash;
-(double)duration;
-(double)imageWidth;
-(void)setImageHeight:(double)arg1 ;
-(void)setIsAttachment:(BOOL)arg1 ;
-(void)setMime:(NSString *)arg1 ;
-(void)setMd5Hash:(NSString *)arg1 ;
@end
