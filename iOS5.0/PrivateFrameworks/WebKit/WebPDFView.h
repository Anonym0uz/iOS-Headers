/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WAKView.h"

#import "WebPDFDocumentRepresentation-Protocol.h"
#import "WebPDFDocumentView-Protocol.h"

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>
{
    BOOL dataSourceHasBeenSet;
    struct CGPDFDocument *_PDFDocument;
    NSString *_title;
    struct CGRect *_pageRects;
}

+ (id)supportedMIMETypes;
+ (struct CGColor *)shadowColor;
+ (struct CGColor *)backgroundColor;
+ (Class)_representationClassForWebFrame:(id)arg1;
- (void)dealloc;
- (void)drawPage:(struct CGPDFPage *)arg1;
- (id)_pagesInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setDataSource:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)layout;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)_computePageRects;
- (void)_checkPDFTitle;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (BOOL)canProvideDocumentSource;
- (id)documentSource;
- (id)title;
- (unsigned int)pageNumberForRect:(struct CGRect)arg1;
- (unsigned int)totalPages;
- (struct CGPDFDocument *)doc;
- (struct CGRect)rectForPageNumber:(unsigned int)arg1;

@end
