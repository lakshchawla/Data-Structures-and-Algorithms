from django.conf.urls import include
from django.conf.urls import url
from secApp import views

urlpatterns = [
    url(r'^$', views.index, name = 'index'),
]