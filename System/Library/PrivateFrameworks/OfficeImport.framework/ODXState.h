/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, OAXDrawingState;

@interface ODXState : OCXReadState {

	CXNamespace* mODXDiagramNamespace;
	OAXDrawingState* mOfficeArtState;

}

@property (nonatomic,retain) CXNamespace * ODXDiagramNamespace; 
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)initWithOfficeArtState:(id)arg1 ;
-(CXNamespace *)ODXDiagramNamespace;
-(id)officeArtState;
-(void)setODXDiagramNamespace:(CXNamespace *)arg1 ;
@end
